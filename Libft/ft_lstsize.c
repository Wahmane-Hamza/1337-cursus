/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:52:54 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/01 19:03:14 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    char    *nx;
    int count;

    count = 0;
    nx = lst;
    while (nx)
    {
        nx = nx->next;
        count++;
    }
}


int main()
{
    
}