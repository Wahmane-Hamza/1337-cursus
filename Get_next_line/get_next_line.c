/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:17:56 by hwahmane          #+#    #+#             */
/*   Updated: 2024/12/11 16:30:49 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *new_n(char *stack)
{
    int i;
    int len_before_n;
    int len_after_n;
    char    *cup;

    len_before_n = before_n_stack(stack);
    if (stack[len_before_n] == '\0')
        return (free (stack), NULL);
    if(stack[len_before_n + 1] != '\0')
    {
        len_after_n = after_n_stack(stack,len_before_n + 1);
        cup = malloc(len_after_n + 1);
        if (!cup)
            return (free(stack), NULL);
        i = 0;
        while (stack[len_before_n + 1])
        {
            len_before_n++;
            cup[i] = stack[len_before_n];
            i++;
        }
        cup[i] = '\0';
        return (free(stack), cup);
    }
    return (free(stack), NULL);
}

char    *the_line(char *stack)
{
    int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	while (stack[i] != '\n' && stack[i] != '\0')
		i++;
	if (stack[i] == '\n')
		i++;
	line = malloc (i + 1);
	if (!line)
		return (NULL);
	while (j < i)
	{
		line[j] = stack[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char    *get_n(char *stack, int fd)
{
    int i;
    char        *buffer;
    
    buffer = malloc((size_t)BUFFER_SIZE + 1);
    if (!buffer)
        return (free(stack), NULL);
    while (ft_strchr(stack,'\n') != 1)
    {
        i = read(fd, buffer, BUFFER_SIZE);
        if (i <= 0)
		{
			stack = ft_check(i, buffer, stack);
			break ;
		}
        buffer[i] = '\0';
        stack = ft_strjoin(stack, buffer);
        if (!stack)
        {
            free(buffer);
			return (NULL);
        }
    }
    free(buffer);
    return (stack);
}

char *get_next_line(int fd)
{
    static char *stack;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    stack = get_n(stack , fd);
        if (!stack)
		return (free(stack), NULL);
    line = the_line(stack);
    stack = new_n(stack);
    return (line);
}
