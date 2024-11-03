/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:50:22 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/03 11:25:02 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list 	*new_list;

	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (0);
	lst = lst->next;
	while(lst)
	{
		new_list->next = ft_lstnew(f(lst->content));
		if(!new_list->next)
		{
			ft_lstclear(new_list, del);
			return (0);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (new_list);
}


void f(void *ele)
{
	ft_strdup(ele);
}



void console_log(t_list *lst)
{
	while(lst)
	{
		printf("%s\n",lst->content);
		lst = lst->next;
	}
}

int main ()
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew(ft_strdup("node1"));
	t_list *node2 = ft_lstnew(ft_strdup("node2"));
	t_list *node3 = ft_lstnew(ft_strdup("node3"));
	ft_lstadd_front(&list,node1);
	ft_lstadd_front(&list,node2);
	ft_lstadd_front(&list,node3);

	printf("before : \n");
	console_log(list);

	printf("new : \n");
	console_log(ft_lstmap(list,));
}