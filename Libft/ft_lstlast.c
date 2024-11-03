/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:04:40 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/03 10:49:21 by hwahmane         ###   ########.fr       */
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
