/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:45:12 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/24 15:14:53 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!src || !dst || dstsize == 0)
		return (0);
	j = 0;
	while (src[j])
		j++;
	k = 0;
	while (dst[k])
		k++;
	i = 0;
	while (i + k < dstsize - 1)
	{
		dst[k + i] = src[i];
		i++;
	}
	dst[k + i] = 0;
	return (j);
}

// int main()
// {
// 	char src[] = "hello";
// 	char dst[10] = "";
// 	printf("before :%s \n",dst);
// 	ft_strlcat(dst,src,sizeof(dst));
// 	printf("after :%s \n",dst);

// }