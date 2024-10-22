/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:57:50 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/22 12:03:16 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int main(int argc,char **argv){
	int i = 1;
	while (i < argc)
	{
		int c = ft_isprint(argv[i][0]) + 48;
		write(1, &c, 1);
		i++;
	}
    return 0;
}