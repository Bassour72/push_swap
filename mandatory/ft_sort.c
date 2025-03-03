/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:53:05 by wizo              #+#    #+#             */
/*   Updated: 2025/03/01 16:59:30 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_two_or_three(int size, t_stack **stack_a)
{
	if (size == 2)
		ft_swap_a(stack_a);
	else if (size == 3)
		sort_three(stack_a);
}

static	void	ft_sort_five(int size, t_stack **stack_a, t_stack **stack_b)
{
	if (size <= 3)
		return (ft_sort_two_or_three(size, stack_a));
	while (ft_stack_size(*stack_a) > 3)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			ft_push_in_b(stack_a, stack_b);
		else
			ft_rotate_a(stack_a, 1);
	}
	sort_three(stack_a);
	if ((*stack_b) && (*stack_b)->next && (*stack_b)->index < \
	(*stack_b)->next->index)
		ft_swap_b(stack_b);
	ft_push_in_a(stack_a, stack_b);
	ft_push_in_a(stack_a, stack_b);
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	if (ft_check_sort(stack_a) == 1)
		return ;
	size = ft_stack_size(*stack_a);
	if (size == 5 || size <= 3)
		return (ft_sort_five(size, stack_a, stack_b));
	while (ft_stack_size(*stack_a) > (size / 2) + 1)
	{
		if ((*stack_a)->index != 0 && (*stack_a)->index <= ((size / 2)))
			ft_push_in_b(stack_a, stack_b);
		else
			ft_rotate_a(stack_a, 1);
	}
	while (ft_stack_size(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0 && (*stack_a)->index != size - 2 && \
		(*stack_a)->index != size - 1)
			ft_push_in_b(stack_a, stack_b);
		else
			ft_rotate_a(stack_a, 1);
	}
	sort_three(stack_a);
	ft_move_stack_b_to_stack_a(stack_a, stack_b);
	ft_final_rotation(stack_a);
}
