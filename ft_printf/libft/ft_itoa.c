/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 19:43:52 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/25 11:16:10 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = count_len(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}

// #include "libft.h"
// #include <stdio.h>
// #include <limits.h>

// int	main(void)
// {
// 	char	*str;

// 	/* Test positive number */
// 	str = ft_itoa(12345);
// 	printf("12345 -> %s\n", str);
// 	free(str);

// 	/* Test zero */
// 	str = ft_itoa(0);
// 	printf("0 -> %s\n", str);
// 	free(str);

// 	/* Test negative number */
// 	str = ft_itoa(-9876);
// 	printf("-9876 -> %s\n", str);
// 	free(str);

// 	/* Test INT_MAX */
// 	str = ft_itoa(INT_MAX);
// 	printf("INT_MAX -> %s\n", str);
// 	free(str);

// 	/* Test INT_MIN */
// 	str = ft_itoa(INT_MIN);
// 	printf("INT_MIN -> %s\n", str);
// 	free(str);

// 	return (0);
// }
