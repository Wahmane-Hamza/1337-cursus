/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:17:20 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/03 11:17:12 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// void f(void *ele)
// {
// 	ft_strlcpy(ele,"yuuu",sizeof(ele));
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

// 	ft_lstiter(list, f);

// 	printf("after : \n");
// 	console_log(list);
// }