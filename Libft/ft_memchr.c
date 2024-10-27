/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:18:20 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 14:01:38 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		c2;
	size_t				i;
	const unsigned char	*str;

	if (!s)
		return (NULL);
	c2 = (unsigned char)c;
	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c2)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int main() {
// 	char str[] = "Hello world";
// 	char ptr = '\0';
// 	printf("%s\n",memchr(str,ptr,11));
// 	printf("%p\n%p\n",&str[11],memchr(str,ptr,11));
// 	return 0;
// }
