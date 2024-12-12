/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:14:57 by hwahmane          #+#    #+#             */
/*   Updated: 2024/12/12 16:25:22 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define    GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
int     ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int	    before_n_stack(char *stack);
int	    after_n_stack(char *stack, int i);
char	*ft_strdup(char *s1);

#endif