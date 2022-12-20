/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:29:49 by dlima             #+#    #+#             */
/*   Updated: 2022/12/20 18:07:01 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void hexa(unsigned long long num)
{
    char *chars;

    chars = "0123456789abcdef";
    if (num < 16)
    {
        write(1, &chars[num], 1);
    }
    else
    {
        hexa(num / 16);
        hexa(num % 16);
    }
}

int ft_pointer_format(unsigned long long num)
{
    printf("num = %llu\n", num);
    hexa(534);
    write(1, "\n", 1);
    hexa(num);
    return (1);
}