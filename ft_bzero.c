/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:25:52 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/23 10:52:58 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void	*ft_memset(void *str, int c, size_t n)
{
	char			*ptr;
	unsigned int	uc;
	size_t			i;

	ptr = str;
	uc = c;
	i = 0;
	while (i < n)
		ptr[i++] = uc;
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main() {
//     // Test 1: Standard case
//     char test1[10] = "123456789";
//     printf("Before ft_bzero: %s\n", test1);
//     ft_bzero(test1, 5);
//     printf("After ft_bzero :");
//     int i = 0;
// 	while(i < 10)
// 	{
//         printf("%c", test1[i++]);
// 	}
//     return 0;
// }
