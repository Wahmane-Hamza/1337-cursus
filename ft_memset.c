/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:58:50 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/23 10:53:24 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
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

// int main()
// {
//     char str[50]="62ello world";
//     printf("%s",ft_memset(str,'#',5));
// }