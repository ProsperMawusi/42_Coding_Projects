/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:26:55 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 11:41:05 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include "libft.h"
// #include <stdio.h>

// void test_func(unsigned int i, char *c)
// {
//     // Example: shift each character by its index
//     *c = *c + i;
// }

// int main(void)
// {
//     char str1[] = "abcd";
//     char str2[] = "Hello";

//     ft_striteri(str1, test_func);
//     ft_striteri(str2, test_func);

//     printf("Result 1: %s\n", str1);
//     printf("Result 2: %s\n", str2);

//     return 0;
// }
