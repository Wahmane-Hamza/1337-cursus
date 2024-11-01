/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:52:54 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/01 21:25:25 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list    *nx;
    int count;

    count = 0;
    nx = lst;
    while (nx)
    {
        nx = nx->next;
        count++;
    }
    return (count);
}


int main()
{
    t_list  *list = NULL;

    t_list *node1 = ft_lstnew("node 1");
    t_list *node2 = ft_lstnew("node 2");
    t_list *node3 = ft_lstnew("node 3");

    ft_lstadd_front(&list,node1);
    ft_lstadd_front(&list,node2);
    ft_lstadd_front(&list,node3);
    printf("%d",ft_lstsize(list));
}