/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_target_position.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:35:40 by wizo              #+#    #+#             */
/*   Updated: 2025/03/01 15:31:29 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_target_position(t_stack *stack_a, int index)
{
	int		pos;
	int		best_pos;
	int		min_diff;
	t_stack	*temp;

	pos = 0;
	best_pos = -1;
	min_diff = INT_MAX;
	temp = stack_a;
	while (temp)
	{
		if (temp->index > index && (temp->index - index) < min_diff)
		{
			min_diff = temp->index - index;
			best_pos = pos;
		}
		temp = temp->next;
		pos++;
	}
	if (best_pos == -1)
		return (ft_find_min_index_position(stack_a));
	return (best_pos);
}
