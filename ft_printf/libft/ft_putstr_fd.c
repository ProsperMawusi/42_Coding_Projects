/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:51:36 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 11:40:30 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

// #include "libft.h"

// int main(void)
// {
//     ft_putstr_fd("Hello, world!", 1);  // write to stdout
//     write(1, "\n", 1);

//     ft_putstr_fd("This goes to stderr", 2); // write to stderr
//     write(2, "\n", 1);

//     return 0;
// }
