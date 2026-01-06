/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:40:18 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/25 11:17:49 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	size_t			i;
	unsigned char	*b;

	a = (unsigned char *)s1;
	i = 0;
	b = (unsigned char *)s2;
	while (i < n)
	{
		if (!(a[i] == b[i]))
			return (a[i] - b[i]);
		else
			i++;
	}
	return (0);
}

// int main(void)
// {
//     char a1[] = { 'A', 'B', 'C', 'D' };
//     char a2[] = { 'A', 'B', 'C', 'D' };

//     char b1[] = { 'A', 'B', 'C', 'D' };
//     char b2[] = { 'A', 'B', 'X', 'D' };

//     char c1[] = { 'A', 'B', 'Z', 'D' };
//     char c2[] = { 'A', 'B', 'C', 'D' };

//     printf("Equal arrays: %d\n", memcmp(a1, a2, 4));      
//     printf("Diff at index 2 (C vs X): %d\n", memcmp(b1, b2, 4)); 
//     printf("Diff at index 2 (Z vs C): %d\n", memcmp(c1, c2, 4)); 

//     return 0;
// }
