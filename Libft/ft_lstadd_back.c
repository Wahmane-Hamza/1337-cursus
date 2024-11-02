/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:28:02 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/02 16:53:20 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst || new)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// int main()
// {
//     t_list *list = NULL;
//     t_list *node1 = ft_lstnew("node1");
//     t_list *node2 = ft_lstnew("node2");
//     t_list *node3 = ft_lstnew("node3");
//     ft_lstadd_front(&list,node1);
//     ft_lstadd_front(&list,node2);
//     ft_lstadd_front(&list,node3);
//     printf("before : %p\n",list->next->next->next);
//     t_list *node4 = ft_lstnew("node4");
//     ft_lstadd_back(&list,node4);
//     printf("after  : %p\n",list->next->next->next);
//     printf("content  : %s\n",list->next->next->next->content);
// }