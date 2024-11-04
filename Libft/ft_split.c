/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:22:26 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/04 18:18:34 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	num_strings;
	int	i;

	i = 0;
	num_strings = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			num_strings++;
		i++;
	}
	return (num_strings);
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

static char	**fill_array(char **arr, const char *s, char c)
{
	int		current;
	int		start;
	int		count;

	current = 0;
	count = 0;
	while (s[current])
	{
		while (s[current] == c)
			current++;
		if (s[current] == '\0')
			break ;
		start = current;
		while (s[current] && s[current] != c)
			current++;
		arr[count] = ft_substr(s, start, current - start);
		if (arr[count] == NULL)
			return (ft_freearray(arr, count));
		count++;
	}
	arr[count] = NULL;
	return (arr);
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
	return (fill_array(array, s, c));
}
