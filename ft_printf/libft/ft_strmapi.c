/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:53:02 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 11:42:43 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	a;
	char	*new_string;
	int		i;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	a = (size_t)ft_strlen((char *)s);
	new_string = malloc(a + 1);
	if (!new_string)
	{
		return (NULL);
	}
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

// #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

// // Example function: shift each character by its index
// char test_func(unsigned int i, char c)
// {
//     return c + i;
// }

// int main(void)
// {
//     char *res1 = ft_strmapi("abcd", test_func);
//     char *res2 = ft_strmapi("Hello", test_func);

//     printf("Result 1: %s\n", res1);   // expected: aceg
//     printf("Result 2: %s\n", res2);   // expected: Hfnqt

//     free(res1);
//     free(res2);

//     return 0;
// }
