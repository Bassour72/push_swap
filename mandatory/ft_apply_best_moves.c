/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_best_moves.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:09:51 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/09 14:09:51 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	apply_best_rrr(t_stack **stack_a, t_stack **stack_b, \
t_cost_move *best_cost)
{
	while (best_cost->rra > 0 && best_cost->rrb > 0)
	{
		ft_reverse_rotate_ab(stack_a, stack_b);
		best_cost->rra--;
		best_cost->rrb--;
	}
}

static	void	apply_best_rr(t_stack **stack_a, t_stack **stack_b, \
t_cost_move *best_cost)
{
	while (best_cost->ra > 0 && best_cost->rb > 0)
	{
		ft_rotate_a_and_b(stack_a, stack_b, 1);
		best_cost->ra--;
		best_cost->rb--;
	}
}

void	ft_apply_best_moves(t_stack **stack_a, t_stack **stack_b, \
t_cost_move *best_cost)
{
	apply_best_rrr(stack_a, stack_b, best_cost);
	apply_best_rr(stack_a, stack_b, best_cost);
	while (best_cost->ra > 0)
	{
		ft_rotate_a(stack_a, 1);
		best_cost->ra--;
	}
	while (best_cost->rra > 0)
	{
		ft_reverse_rotate_a(stack_a, 1);
		best_cost->rra--;
	}
	while (best_cost->rb > 0)
	{
		ft_rotate_b(stack_b, 1);
		best_cost->rb--;
	}
	while (best_cost->rrb > 0)
	{
		ft_reverse_rotate_b(stack_b, 1);
		best_cost->rrb--;
	}
}
