/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:22:26 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/04 18:24:05 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_array(char **array, int j)
{
	while (j >= 0)
	{
		free(array[--j]);
	}
	free (array);
	return (NULL);
}

static char	**fill_array(char const *s, char c, char **array, int i)
{
	int		k;
	int		j;
	char	*elem;

	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] != c && s[i] != '\0')
		{
			k++;
			i++;
		}
		if (k > 0)
		{
			elem = ft_substr(s, i - k, k);
			if (!elem)
				return (free_array(array, j));
			array[j++] = elem;
		}
		if (s[i] != '\0')
			i++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	if (!s)
		return (NULL);
	array = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	return (fill_array(s, c, array, i));
}
