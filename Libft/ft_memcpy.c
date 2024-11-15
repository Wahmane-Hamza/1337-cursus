/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:56:56 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/15 14:41:23 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

int main()
{
	char s1[] = "hello world";
	
	printf("%s\n", ft_memcpy(s1, s1, 5));
}