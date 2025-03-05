/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:15:31 by ybassour          #+#    #+#             */
/*   Updated: 2025/02/20 21:08:48 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
