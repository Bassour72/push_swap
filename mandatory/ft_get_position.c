/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:26:02 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 15:26:21 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_position(t_stack *stack, t_stack *node)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack == node)
			return (pos);
		stack = stack->next;
		pos++;
	}
	return (-1);
}
