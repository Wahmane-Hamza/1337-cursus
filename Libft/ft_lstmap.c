/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:50:22 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/03 14:33:54 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_front(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

// void *f(void *ele)
// {
// 	return (ft_strdup(ele));
// }
// void	del(void *ele)
// {
// 	free(ele);
// }
// void console_log(t_list *lst)
// {
// 	while(lst)
// 	{
// 		printf("%s\n",lst->content);
// 		lst = lst->next;
// 	}
// }
// int main ()
// {
// 	t_list *list = NULL;
// 	t_list *node1 = ft_lstnew(ft_strdup("node1"));
// 	t_list *node2 = ft_lstnew(ft_strdup("node2"));
// 	t_list *node3 = ft_lstnew(ft_strdup("node3"));
// 	ft_lstadd_front(&list,node1);
// 	ft_lstadd_front(&list,node2);
// 	ft_lstadd_front(&list,node3);
// 	printf("before : \n");
// 	console_log(list);
// 	printf("new : \n");
// 	console_log(ft_lstmap(list,f,del));
// }