/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 07:27:43 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/24 14:44:22 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!src || !dst)
		return (0);
	j = 0;
	while (src[j])
		j++;
	if (dst[0] == '\0')
		return (0);
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (j);
}

// int main()
// {
// 	char src[] = "hello";
// 	char dst[10] = "k";
// 	printf("before :%s \n",dst);
// 	ft_strlcpy(dst,src,sizeof(dst));
// 	printf("after :%s \n",dst);

// }