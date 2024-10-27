/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:41:25 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 14:02:00 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

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

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!src || !dst)
		return (0);
	j = 0;
	while (src[j])
		j++;
	if (dstsize == 0)
		return (j);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;
	int		i;

	len = ft_strlen(s1);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}

// int main()
// {   
//     char *str =ft_strdup("abcdefgh");
//     printf("%s",str);
//     free(str);
// }