/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a_and_b_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:16:10 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/02 16:02:29 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_rotate_a_and_b(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		ft_rotate_a(stack_a);
	}
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		ft_rotate_b(stack_b);
	}
}
