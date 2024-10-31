/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:54:05 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/30 18:50:57 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
    write(3,&c,1);
}

int main()
{
    int fd = open("test.txt",O_WRONLY); 
    printf("%d",fd);
}