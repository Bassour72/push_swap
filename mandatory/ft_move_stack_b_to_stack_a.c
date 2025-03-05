/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_stack_b_to_stack_a.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:16:14 by wizo              #+#    #+#             */
/*   Updated: 2025/03/01 15:35:40 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_stack_b_to_stack_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*best_node;
	t_stack		*temp;
	t_cost_move	best_cost;
	int			min_total;
	t_cost_move	cost;

	while (*stack_b)
	{
		temp = *stack_b;
		best_node = NULL;
		min_total = INT_MAX;
		while (temp)
		{
			ft_calculate_move_cost(*stack_a, *stack_b, temp, &cost);
			if (cost.total < min_total)
			{
				min_total = cost.total;
				best_cost = cost;
				best_node = temp;
			}
			temp = temp->next;
		}
		ft_apply_best_moves(stack_a, stack_b, &best_cost);
		ft_push_in_a(stack_a, stack_b);
	}
}
