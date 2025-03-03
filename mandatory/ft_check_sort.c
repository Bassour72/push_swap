/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:58:07 by ybassour          #+#    #+#             */
/*   Updated: 2025/02/24 11:59:09 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sort(t_stack **stack)
{
	t_stack	*temp;

	if (!stack || !(*stack))
		return (ERROR);
	temp = *stack;
	while (temp->next != NULL)
	{
		if (temp->val > temp->next->val)
			return (ERROR);
		temp = temp->next;
	}
	return (SUCCESS);
}
