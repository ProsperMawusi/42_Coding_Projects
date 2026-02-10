/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:34:09 by pmawusi           #+#    #+#             */
/*   Updated: 2026/02/03 11:57:28 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parse_and_validate(char **argv)
{
	t_stack	*numbers;

	numbers = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!numbers)
		return (NULL);
}