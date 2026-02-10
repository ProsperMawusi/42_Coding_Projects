/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:15:21 by pmawusi           #+#    #+#             */
/*   Updated: 2026/02/03 11:48:28 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (!parse_and_validate(argv))
	{
		write (2, "Error\n", 6);
		return (1);
	}
}
