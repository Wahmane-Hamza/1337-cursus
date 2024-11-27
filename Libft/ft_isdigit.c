/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:38:38 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/27 20:57:01 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

// int	main()
// {
// 	printf("%d\n",ft_isdigit('@'));
// 	printf("%d\n",ft_isdigit('1'));
// }