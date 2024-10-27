/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:35:16 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 08:53:58 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long int	k;
	int					sign;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	k = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		k = (k * 10) +(str[i] - 48);
		i++;
	}
	return (k * sign);
}

// int main(int ac,char **av)
// {
//     int i = 1;
//     while (i < ac)
//     {
//         // printf("%s\n",av[i]);
//         printf("%d\n",ft_atoi(av[i]));
//         printf("%d\n",atoi(av[i]));
//         i++;
//     }
// }