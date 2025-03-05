/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_move_cost.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:20:13 by wizo              #+#    #+#             */
/*   Updated: 2025/03/01 15:37:43 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_calculate_move_cost(t_stack *stack_a, t_stack *stack_b, \
t_stack *node_b, t_cost_move *cost)
{
	int			size_a;
	int			size_b;
	int			pos_b;
	int			target_pos_a;
	t_cost_move	move;

	size_a = ft_stack_size(stack_a);
	size_b = ft_stack_size(stack_b);
	pos_b = ft_get_position(stack_b, node_b);
	target_pos_a = ft_find_target_position(stack_a, node_b->index);
	ft_calculate_moves_to_top(target_pos_a, size_a, &move, 1);
	ft_calculate_moves_to_top(pos_b, size_b, &move, 0);
	ft_determine_best_rotation(&move, cost);
}
