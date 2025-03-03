/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contains_duplicates_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:47:05 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 18:08:18 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_contains_duplicates(t_stack *stack)
{
	t_stack	*current;
	t_stack	*checker;

	if (!stack)
		return (ERROR);
	current = stack;
	while (current)
	{
		checker = current->next;
		while (checker)
		{
			if (current->val == checker->val)
				return (ERROR);
			checker = checker->next;
		}
		current = current->next;
	}
	return (SUCCESS);
}
