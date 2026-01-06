/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:01:01 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/25 11:18:24 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (dest);
}

// int main()
// {
//     char buffer[] = "C programming memset function";
//    printf( "Before: %s\n", buffer );
//    ft_memset( buffer, '#', 5 );
//    printf( "After:  %s\n", buffer );
//    return(0);
// }
