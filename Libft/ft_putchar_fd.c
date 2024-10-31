/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:54:05 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/31 13:13:56 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
//     int fd = open("test.txt",O_WRONLY);
//     ft_putchar_fd("hello",fd);
//     printf("%d hi \e[35mThis text is green\n",fd);
// }