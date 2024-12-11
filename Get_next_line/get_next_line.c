/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:17:56 by hwahmane          #+#    #+#             */
/*   Updated: 2024/12/11 11:43:29 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_n(char *stack, int fd)
{
    int i;
    char        *buffer;

    while (ft_strchr(buffer,'\n'))
    {
        buffer = malloc((size_t)BUFFER_SIZE + 1);
        if (!buffer)
            return (NULL);
            printf("%s",);
        i = read(fd, buffer, BUFFER_SIZE);
        ft_strjoin(stack, buffer);
        if (!stack)
			return (NULL);
    }
    return (stack);
}

char *get_next_line(int fd)
{
    static char *stack;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    stack = get_n(stack , fd);
    return (stack);
}
