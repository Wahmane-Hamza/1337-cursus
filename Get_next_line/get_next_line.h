/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:35:35 by hwahmane          #+#    #+#             */
/*   Updated: 2024/12/11 14:19:07 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define    GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
# endif

char	*get_next_line(int fd);
int     ft_strchr(const char *s, int c);
char	*ft_strjoin(char *stack, char *buffer);
int	    before_n_stack(char *stack);
int	    after_n_stack(char *stack, int i);
char	*ft_check(int i, char *buffer, char *stack);

#endif