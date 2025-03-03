/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:23:25 by ybassour          #+#    #+#             */
/*   Updated: 2025/02/22 22:16:57 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->val;
	b = (*stack_a)->next->val;
	c = (*stack_a)->next->next->val;
	if (a > b && b < c && a < c)
		ft_swap_a(stack_a);
	else if (a > b && b > c)
	{
		ft_swap_a(stack_a);
		ft_reverse_rotate_a(stack_a, 1);
	}
	else if (a > b && b < c)
		ft_rotate_a(stack_a, 1);
	else if (a < b && b > c && a < c)
	{
		ft_swap_a(stack_a);
		ft_rotate_a(stack_a, 1);
	}
	else if (a < b && b > c)
		ft_reverse_rotate_a(stack_a, 1);
}
