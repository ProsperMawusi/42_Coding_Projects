/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:12:43 by pmawusi           #+#    #+#             */
/*   Updated: 2025/12/09 10:19:36 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'd')
		count += print_digit(va_arg(ap, int));
	else if (specifier == 'i')
		count += print_base(va_arg(ap, int), 10);
	else if (specifier == 'u')
		count += print_base(va_arg(ap, unsigned int), 10);
	else if (specifier == 'x')
		count += print_hex(va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count += print_hexcap(va_arg(ap, unsigned int), 16);
	else if (specifier == 'p')
		count += ft_putptr(va_arg(ap, void *));
	else if (specifier == '%')
		count += write(1, "%", 1);
	else
		count += write(1, &specifier, 1);
	return (count);
}
