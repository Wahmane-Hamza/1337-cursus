/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:45:12 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/04 12:12:25 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	d;

	if (!src || !dst)
		return (NULL);
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (dstsize == 0)
		return (s);
	if (d >= dstsize)
		return (dstsize + s);
	i = 0;
	while ((i + d) < (dstsize - 1) && src[i])
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
