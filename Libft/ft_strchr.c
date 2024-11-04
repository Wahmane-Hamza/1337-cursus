/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:26:05 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/04 10:09:41 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c2;
	int		i;

	if (!s)
		return (NULL);
	c2 = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c2)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
