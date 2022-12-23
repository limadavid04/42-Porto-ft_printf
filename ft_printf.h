/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:50:06 by dlima             #+#    #+#             */
/*   Updated: 2022/12/23 12:33:32 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_char_format(int c);
int		ft_string_format(char *str);
int		ft_pointer_format(unsigned long long num);
int		ft_decimal_format(long num);
size_t	ft_strlen(const char *s);
int		ft_hexanumlen(unsigned long long num);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(long n, int fd);

#endif
