/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 07:26:51 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/07 15:54:19 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	const unsigned char	*src2;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	i = 0;
	if (dst2 > src2)
	{
		while (i < len)
		{
			dst2[len - 1] = src2[len - 1];
			len--;
		}
		return (dst);
	}
	while (i < len)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	char s1[] = "hello world";
// 	char *s2 = s1 + 3;

// 	ft_memmove(s2, s1, 5);

// 	printf("dst :%s\n", s2);
// 	printf("src :%s\n", s1);
// }