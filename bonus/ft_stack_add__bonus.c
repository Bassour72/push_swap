/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add__bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:15:31 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 18:09:55 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_stack_add_(t_stack **stack, t_stack *node)
{
	t_stack	*current;

	if (!node)
		return ;
	if (*stack == NULL)
	{
		*stack = node;
	}
	else
	{
		current = *stack;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
}
