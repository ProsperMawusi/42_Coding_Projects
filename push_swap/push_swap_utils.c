/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:55:04 by pmawusi           #+#    #+#             */
/*   Updated: 2026/02/03 11:56:10 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*output;
	char	*buffer;
	int		total;

	total = count * size;
	output = malloc(total);
	if (output == NULL)
		return (NULL);
	buffer = output;
	while (total-- > 0)
	{
		*buffer++ = 0;
	}
	return (output);
}
