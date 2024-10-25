/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:58:50 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/24 14:43:43 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
//     int str[10]= {1,2,3,4,5,6};
//     printf("%d\n", str[1]);
// 	ft_memset(str,1,sizeof(int)*2);
// 	int i = 0;
// 	while (i < 6)
// 	{
//     printf("%d\n", str[i++]);
// 	}
// }