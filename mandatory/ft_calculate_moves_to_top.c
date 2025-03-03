/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_moves_to_top.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:36:57 by wizo              #+#    #+#             */
/*   Updated: 2025/03/01 15:37:43 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_calculate_moves_to_top(int pos, int size, t_cost_move *move, \
int boolean)
{
	if (boolean == SUCCESS)
	{
		move->ra = pos;
		move->rra = size - pos;
	}
	else
	{
		move->rb = pos;
		move->rrb = size - pos;
	}
}
