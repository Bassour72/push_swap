/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a_and_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:16:10 by ybassour          #+#    #+#             */
/*   Updated: 2025/02/22 22:08:45 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a_and_b(t_stack **stack_a, t_stack **stack_b, int boolean)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		ft_rotate_a(stack_a, 0);
	}
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		ft_rotate_b(stack_b, 0);
	}
	if (boolean == 1)
		ft_printf("rr\n");
}
