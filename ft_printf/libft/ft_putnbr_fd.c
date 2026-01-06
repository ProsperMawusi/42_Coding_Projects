/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:03:02 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 11:40:09 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	pos;
	long	nb;

	nb = n;
	if (nb == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	pos = (nb % 10) + '0';
	write(fd, &pos, 1);
}

// #include "libft.h"

// int main(void)
// {
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(42, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(-42, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(2147483647, 1); // INT_MAX
//     write(1, "\n", 1);

//     ft_putnbr_fd(-2147483648, 1); // INT_MIN
//     write(1, "\n", 1);

//     return 0;
// }
