/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:22:26 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/29 19:42:04 by hwahmane         ###   ########.fr       */
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
	while (j > 0)
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

	if(!s)
		return (NULL);
	array = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	return (fill_array(s, c, array, i));
}

// int main()
// {
// 	char **s1= ft_split(" hello world hi fv jjjjjj ghj  ",' ');
// 	printf("%s",s1[6]);
// 	free(s1);
// }

// int main()
// {
//     char **result;
//     int i;

//     // Test 1: Normal case
//     result = ft_split("hello world hi fv jjjjjj ghj", ' ');
//     if (result)
//     {
//         for (i = 0; result[i] != NULL; i++)
//         {
//             printf("result[%d]: '%s'\n", i, result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }

//     // Test 2: Empty string
//     result = ft_split("", ' ');
//     if (result)
//     {
//         for (i = 0; result[i] != NULL; i++)
//         {
//             printf("result[%d]: '%s'\n", i, result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }

//     // Test 3: String with only delimiters
//     result = ft_split("     ", ' ');
//     if (result)
//     {
//         for (i = 0; result[i] != NULL; i++)
//         {
//             printf("result[%d]: '%s'\n", i, result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }

//     // Test 4: String with no delimiters
//     result = ft_split("helloworld", ' ');
//     if (result)
//     {
//         for (i = 0; result[i] != NULL; i++)
//         {
//             printf("result[%d]: '%s'\n", i, result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }

//     // Test 5: NULL string
//     result = ft_split(NULL, ' ');
//     if (result)
//     {
//         printf("result: '%s'\n", *result);
//         free(result);
//     }

//     // Test 6: Delimiter not in string
//     result = ft_split("hello,world", ' ');
//     if (result)
//     {
//         for (i = 0; result[i] != NULL; i++)
//         {
//             printf("result[%d]: '%s'\n", i, result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }

//     return 0;
// }