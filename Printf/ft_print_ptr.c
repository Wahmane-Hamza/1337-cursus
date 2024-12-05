/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:08:40 by hwahmane          #+#    #+#             */
/*   Updated: 2024/12/05 16:39:39 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long n)
{
	if ((void *)n == NULL)
		return (write(1, "(nil)", 5));
	return (write(1, "0x", 2) + ft_print_hexa(n, "0123456789abcdef"));
}
