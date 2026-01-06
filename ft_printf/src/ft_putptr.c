/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:10:34 by pmawusi           #+#    #+#             */
/*   Updated: 2025/12/09 11:51:42 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>

int	ft_putptr( void *p )
{
	unsigned long long	b;
	int					count;

	count = 0;
	if (!p)
	{
		count += write (1, "(nil)", 5);
		return (count);
	}
	b = (unsigned long long)p;
	write (1, "0x", 2);
	count += print_hex(b, 16) + 2;
	return (count);
}
