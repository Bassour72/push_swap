/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a_and_b_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:14:44 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/03 11:30:53 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_swap_a_and_b(t_stack **stack_a, t_stack **stack_b)
{
	if ((!stack_a || !(*stack_a) || !(*stack_a)->next) && \
	(!stack_b || !(*stack_b) || !(*stack_b)->next))
		return ;
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
}
