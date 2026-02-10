/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:34:42 by pmawusi           #+#    #+#             */
/*   Updated: 2026/02/03 11:56:18 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

t_stack	*parse_and_validate(char **argv);

t_node	*node_new(int value);
void	stack_add_back(t_stack *stack, t_node *new_node);

void	sa(t_stack *a);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	*ft_calloc(size_t count, size_t size);
#endif
