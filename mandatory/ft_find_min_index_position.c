/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min_index_position.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:27:40 by wizo              #+#    #+#             */
/*   Updated: 2025/03/01 15:31:46 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min_index_position(t_stack *stack)
{
	int		min_pos;
	int		min_value;
	int		i;
	t_stack	*temp;

	min_pos = 0;
	min_value = stack->index;
	i = 0;
	temp = stack;
	while (temp)
	{
		if (temp->index < min_value)
		{
			min_value = temp->index;
			min_pos = i;
		}
		temp = temp->next;
		i++;
	}
	return (min_pos);
}
