/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:50:06 by dlima             #+#    #+#             */
/*   Updated: 2022/12/20 17:46:26 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_char_format(int c);
int 	ft_printf(const char *str, ...);
int 	ft_string_format(char *str);
int 	ft_pointer_format(unsigned long long num);
size_t	ft_strlen(const char *s);
int 	ft_numlen(int num);
#endif