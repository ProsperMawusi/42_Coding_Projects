/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:42:28 by pmawusi           #+#    #+#             */
/*   Updated: 2025/12/09 10:33:05 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	print_format(char specifier, va_list ap);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	print_digit(long n);
int	print_hex(unsigned long long n, int base);
int	print_hexcap(long n, int base);
int	ft_printf(const char *format, ...);
int	print_base(long long n, int base);
int	ft_putptr( void *p );

#endif