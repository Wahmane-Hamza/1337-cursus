/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:28:50 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 14:02:15 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

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

// int main()
// {
//     char hay[] = "sdsfds hamz";
//     char need[] = "hamza";
//     char *res ;
//     res = ft_strnstr(hay,need,12);
//     printf("%s\n",res);
// }