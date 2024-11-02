/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:04:40 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/02 16:24:52 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	int		len;
	int		i;

	len = ft_lstsize(lst);
	i = 0;
	last = lst;
	while (i < len - 1)
	{
		last = last->next;
		i++;
	}
	return (last);
}

// int main()
// {
//     t_list  *list = NULL;

//     t_list *node1 = ft_lstnew("node 1");
//     t_list *node2 = ft_lstnew("node 2");
//     t_list *node3 = ft_lstnew("node 3");

//     ft_lstadd_front(&list,node1);
//     ft_lstadd_front(&list,node2);
//     ft_lstadd_front(&list,node3);
//     printf("%s\n",list->next->next->content);
//     printf("%s\n",ft_lstlast(list)->content);
// }