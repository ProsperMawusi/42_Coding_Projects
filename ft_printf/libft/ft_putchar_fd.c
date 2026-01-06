/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:56:49 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 11:39:06 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include "libft.h"

// int main(void)
// {
//     ft_putchar_fd('A', 1);   // writes to stdout
//     ft_putchar_fd('\n', 1);

//     ft_putchar_fd('B', 2);   // writes to stderr
//     ft_putchar_fd('\n', 2);

//     return 0;
// }
