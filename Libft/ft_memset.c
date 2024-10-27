/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:58:50 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 14:01:55 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char			*ptr;
	unsigned char	uc;
	size_t			i;

	if (!str)
		return (NULL);
	ptr = (char *)str;
	uc = (char )c;
	i = 0;
	while (i < n)
		ptr[i++] = uc;
	return (str);
}

// int main()
// {
// 	// 1337
// 	int arr = 1;
// 	//[][][][]
// 	printf("%d\n", arr);
// 	// 128 64 32 16 8 4 2 1
// 	// 0    0  0  0  0 1 0 1
// 	// 1     1  1  1  1 1 1 1
// 	ft_memset(&arr, 0, 4);  //260
// 	ft_memset(&arr, 5, 2);  //260
// 	ft_memset(&arr, 255, 1);  //260
// 	printf("%d\n", arr);
// }
// int str[10]= {1,2,3,4,5,6};
// printf("%d\n", str[1]);
// ft_memset(str,1,sizeof(int)*2);
// int i = 0;
// while (i < 6)
// {
// printf("%d\n", str[i++]);
// }