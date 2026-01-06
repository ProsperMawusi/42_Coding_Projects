/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:49:50 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/19 21:45:38 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen((char *)dst);
	src_len = ft_strlen((char *)src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && i < (size - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main()
// {
//     char src[] = "Hello";
//     char dest[] = "World!";
//     int a = ft_strlcat(dest, src, 7);

//     printf("%d", a);
// 	printf("\n%s", dest);
//     // printf("%s", dest);

//     return(0);
// }