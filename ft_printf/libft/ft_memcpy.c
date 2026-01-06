/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:01:54 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 12:42:54 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	i = 0;
	dest1 = (unsigned char *) dest;
	src1 = (unsigned char *) src;
	if (n == 0 || dest == src)
	{
		return (dest);
	}
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
// int main()
// {
//     char src[] = "It is a beautiful brand new day";
//     char dest[] = "Let's achieve those dreams";
//     char *duplimem = memcpy(&dest, &src, 10);

//     printf("%s", duplimem);

//     return(0);
// }