/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:08:18 by dlima             #+#    #+#             */
/*   Updated: 2022/12/21 17:52:50 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str;

	str = "david";
	printf("ft_printf = %d\n", ft_printf("%p\n", str));
	printf("printf = %d\n", printf("%p\n", str));

	ft_printf("%d\n", 153);
	printf("%d", 153);
}
