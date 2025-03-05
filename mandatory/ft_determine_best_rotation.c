/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_determine_best_rotation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:33:12 by wizo              #+#    #+#             */
/*   Updated: 2025/03/01 15:36:54 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	assign_best_rotation(t_cost_move *move, t_cost_move *cost, \
t_cost_move	*total_cost)
{
	if (cost->total == total_cost->total_rr)
	{
		cost->ra = move->ra;
		cost->rb = move->rb;
	}
	else if (cost->total == total_cost->total_rrr)
	{
		cost->rra = move->rra;
		cost->rrb = move->rrb;
	}
	else if (cost->total == total_cost->total_mix1)
	{
		cost->ra = move->ra;
		cost->rrb = move->rrb;
	}
	else
	{
		cost->rra = move->rra;
		cost->rb = move->rb;
	}
}

void	ft_determine_best_rotation(t_cost_move *move, t_cost_move *cost)
{
	t_cost_move	total_cost;

	total_cost.total_rr = move->ra;
	if (move->rb > move->ra)
		total_cost.total_rr = move->rb;
	total_cost.total_rrr = move->rra;
	if (move->rrb > move->rra)
		total_cost.total_rrr = move->rrb;
	total_cost.total_mix1 = move->ra + move->rrb;
	total_cost.total_mix2 = move->rra + move->rb;
	cost->total = total_cost.total_rr;
	if (total_cost.total_rrr < cost->total)
		cost->total = total_cost.total_rrr;
	if (total_cost.total_mix1 < cost->total)
		cost->total = total_cost.total_mix1;
	if (total_cost.total_mix2 < cost->total)
		cost->total = total_cost.total_mix2;
	cost->ra = 0;
	cost->rb = 0;
	cost->rra = 0;
	cost->rrb = 0;
	assign_best_rotation(move, cost, &total_cost);
}
