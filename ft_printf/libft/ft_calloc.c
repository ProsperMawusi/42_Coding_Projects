/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:25:14 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 11:37:47 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
//     int *arr;
//     size_t i;

//     arr = ft_calloc(5, sizeof(int));
//     if (!arr)
//     {
//         printf("Allocation failed\n");
//         return (1);
//     }

//     // Print the allocated array to confirm it's zero-initialized
//     for (i = 0; i < 5; i++)
//         printf("arr[%zu] = %d\n", i, arr[i]);

//     free(arr);
//     return 0;
// }
