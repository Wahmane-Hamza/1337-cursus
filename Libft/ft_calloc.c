/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:27:13 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/04 10:06:56 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sz;
	void	*ptr;

	sz = count * size;
	ptr = malloc(sz);
	if (!ptr)
		return (NULL);
	ft_memset (ptr, 0, sz);
	return (ptr);
}
