/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_to_position.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:29:06 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 15:29:28 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_to_position(t_stack **stack_a, int pos)
{
	int	size;

	size = ft_stack_size(*stack_a);
	if (pos <= size / 2)
	{
		while (pos--)
			ft_rotate_a(stack_a, 1);
	}
	else
	{
		pos = size - pos;
		while (pos--)
			ft_reverse_rotate_a(stack_a, 1);
	}
}
