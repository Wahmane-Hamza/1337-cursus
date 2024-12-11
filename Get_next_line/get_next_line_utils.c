/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:35:11 by hwahmane          #+#    #+#             */
/*   Updated: 2024/12/11 14:23:36 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int ft_strchr(const char *s, int c)
{
	int				i;

    if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *stack, char *buffer)
{
	char	*str;
	size_t	j;
	size_t	i;
	size_t	stack_len;
	size_t	buffer_len;

	stack_len = ft_strlen(stack);
	buffer_len = ft_strlen(buffer);
	i = -1;
	str = malloc(stack_len + buffer_len + 1);
	if (!str)
		return (free(stack), free(buffer), NULL);
	if (!stack)
		stack = malloc(1);
	if (!stack)
		return (free(str), free(buffer), NULL);
	while (++i < stack_len)
		str[i] = stack[i];
	str[i] = '\0';
	j = -1;
	while (++j < buffer_len)
		str[i + j] = buffer[j];
	str[i + j] = '\0';
	return (free(stack), free(buffer), str);
}

int	before_n_stack(char *stack)
{
	int	i;

	i = 0;
	while (stack[i] != '\n' && stack[i] != '\0')
		i++;
	return (i);
}

int	after_n_stack(char *stack, int i)
{
	int j;

	j = 0;
	while (stack[i])
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_check(int i, char *buffer, char *stack)
{
	if (i == 0)
		return (free (buffer), stack);
	return (free (buffer), free (stack), NULL);
}