/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:56:56 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/23 14:13:08 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char *dst2 = (unsigned char*)dst;
	unsigned char *src2 = (unsigned char*)src;

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
	char p1[10] = "aaaaaaaaa";
	char p2[10] = "ddddd";

	int i = 0;
	while (i < 10)
	{
		printf("%c",p2[i]);
		i++;
	}
	
	ft_memcpy(p2,p1,4);
	printf("\n");

	int j = 0;
	while (j < 10)
	{
		printf("%c",p2[j]);
		j++;
	}
}