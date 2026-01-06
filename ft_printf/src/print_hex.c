/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:23:29 by pmawusi           #+#    #+#             */
/*   Updated: 2025/12/09 10:36:39 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < (unsigned long long)base)
		return (ft_putchar(symbols[n]));
	else
	{
		count = print_hex(n / base, base);
		return (count + print_hex(n % base, base));
	}
	return (count);
}

// ."0123456789abcdef" [i]

// num % b =
// 17 % 16 = 1
// 17 /16 = 1

// 11