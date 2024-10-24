/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:56:56 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/24 11:37:36 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	int p1[10] = {1,2,3,4,5,6};
// 	int *p2 = p1+2;

// 	int i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d",p2[i]);
// 		i++;
// 	}

// 	ft_memcpy(p2,p1,0);
// 	printf("\n");

// 	int j = 0;
// 	while (j < 4)
// 	{
// 		printf("%d",p2[j]);
// 		j++;
// 	}
// }