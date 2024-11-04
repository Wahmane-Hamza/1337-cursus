/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:58:50 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/04 10:09:02 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	ptr[i] = '\0';
	return (str);
}
