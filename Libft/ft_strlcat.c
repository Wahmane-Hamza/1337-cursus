/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:45:12 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 18:42:51 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!src || !dst || dstsize == 0)
		return (0);
	j = ft_strlen(src);
	k = ft_strlen(dst);
	if (dstsize <= k)
		return (k + j);
	i = 0;
	while (i + k < dstsize - 1)
	{
		dst[k + i] = src[i];
		i++;
	}
	dst[k + i] = 0;
	return (k + j);
}

// int main()
// {
// 	char src[] = "hello";
// 	char dst[] = "123456789123459";
// 	printf("before :%s \n",dst);
// 	ft_strlcat(dst,src,3);
// 	printf("after :%s \n",dst);

// }