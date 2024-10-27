/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 07:26:51 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 14:01:52 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	if (!dst || !src)
		return (NULL);
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (len--)
		dst2[len] = src2[len];
	return (dst);
}

// int main()
// {
// 	char p1[10] = "abcdef";
// 	char *p2 = p1+2;

// 	int i = 0;
// 	while (i < 4)
// 	{
// 		printf("%c",p2[i]);
// 		i++;
// 	}

// 	ft_memmove(p2,p1,3);
// 	printf("\n");

// 	int j = 0;
// 	while (j < 4)
// 	{
// 		printf("%c",p2[j]);
// 		j++;
// 	}
// }