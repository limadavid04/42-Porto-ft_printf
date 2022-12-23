/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:42:57 by dlima             #+#    #+#             */
/*   Updated: 2022/12/23 12:37:37 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_format(long num)
{
	int	nbr_digits;

	nbr_digits = 0;
	if (num < 0)
		nbr_digits++;
	ft_putnbr_fd(num, 1);
	while (num)
	{
		num /= 10;
		nbr_digits++;
	}
	return (nbr_digits);
}
