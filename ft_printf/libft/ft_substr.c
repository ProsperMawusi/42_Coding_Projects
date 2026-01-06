/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:25:22 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/25 11:28:10 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		total_len;
	char		*new_string;
	size_t		characters_left;

	if (s == NULL)
	{
		return (NULL);
	}
	total_len = (size_t)ft_strlen((char *)s);
	if (start >= total_len)
	{
		new_string = malloc(1);
		new_string[0] = '\0';
		return (new_string);
	}
	characters_left = total_len - start;
	if (len > characters_left)
		len = characters_left;
	new_string = malloc(len + 1);
	if (new_string == NULL)
		return (NULL);
	ft_memcpy (new_string, s + start, len);
	new_string[len] = '\0';
	return (new_string);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char *original = "Hello, World!";
//     char *sub;

//     // Test 1: normal substring
//     sub = ft_substr(original, 7, 5);
//     printf("Test 1: '%s'\n", sub); // Expected: 'World'
//     free(sub);