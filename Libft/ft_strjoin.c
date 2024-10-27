/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:45:11 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 18:58:30 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!src || !dst || dstsize == 0)
		return (0);
	k = ft_strlen(dst);
	j = ft_strlen(src);
	if (dstsize <= k)
		return (k + j);
	i = 0;
	while (i + k < dstsize - 1)
	{
		dst[k + i] = src[i];
		i++;
	}
	dst[k + i] = 0;
	return (k + j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ft_strlcat(ptr, s2, len + 1);
	return (ptr);
}

// int main()
// {
//     char str1[] ="aa ";
//     char str2[] ="";
//     printf("%s",ft_strjoin(str1,str2));
// }