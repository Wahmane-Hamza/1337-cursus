/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:35:35 by hwahmane          #+#    #+#             */
/*   Updated: 2024/12/13 13:49:43 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
int		ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int		before_n_stack(char *stack);
int		after_n_stack(char *stack, int i);
char	*ft_strdup(char *s1);

#endif