/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:58:52 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 11:39:40 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

// #include "libft.h"

// int main(void)
// {
//     ft_putendl_fd("Hello, world!", 1);   // writes to stdout
//     ft_putendl_fd("This goes to stderr", 2); // writes to stderr

//     return 0;
// }
