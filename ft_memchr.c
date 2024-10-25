/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:18:20 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/25 16:44:36 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		c2;
	size_t				i;
	const unsigned char	*str;

	if (!s)
		return (NULL);
	c2 = c;
	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == c2)
			return ((void *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((void *)&str[i]);
	return (NULL);
}

// int main() {
// 	printf("%s\n",ft_memchr("Hello world",'o',5));
// 	return 0;
// }
