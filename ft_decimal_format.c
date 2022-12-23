/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:42:57 by dlima             #+#    #+#             */
/*   Updated: 2022/12/21 17:57:28 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_format(int num)
{
	int	nbr_digits;

	nbr_digits = 1;
	while (num)
	{
		num /= 10;
		nbr_digits++;
	}
	ft_putnbr_fd(num, 1);
	return (nbr_digits);
}
//verificar se ta a retornar a mm merda que o printf
