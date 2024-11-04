/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:28:50 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/04 10:11:11 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (len > i && haystack[i] != '\0')
	{
		k = 0;
		while (haystack[i + k] && haystack[i + k] == needle[k] && needle[k]
			&& (len > i + k))
			k++;
		if (needle[k] == '\0')
			return ((char *)&(haystack[i]));
		i++;
	}
	return (NULL);
}
