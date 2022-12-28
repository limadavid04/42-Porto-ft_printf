/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:08:18 by dlima             #+#    #+#             */
/*   Updated: 2022/12/27 14:48:46 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// printf("n = %d\n", printf("%x\n", 0));
	// printf("n = %d\n", ft_printf("%x\n", 0));
	// printf("%x\n", LONG_MAX);
	// printf("%d\n", printf("%lx\n", ULONG_MAX));
	ft_printf("%x\n", ULONG_MAX);
	printf("%lx\n", ULONG_MAX);
}
