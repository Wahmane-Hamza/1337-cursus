/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:41:25 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/04 10:47:41 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s1);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}
