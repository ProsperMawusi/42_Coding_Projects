/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:18:34 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/25 11:17:27 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	unsigned char	a;
	size_t			i;
	unsigned char	*b;

	a = (unsigned char) c;
	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		if (b[i] == a)
		{
			return ((char *)(b + i));
		}
		i++;
	}
	return ((char *)0);
}

// int main()
// {
//     char input[] = "It is indeed a new day!";
//     printf("%p", ft_memchr(input,'y',2));

//     return(0);
// }