/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_commands_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:39:55 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/03 11:04:21 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static	int	ft_process_command(t_stack **stack_a, char *str_buffer)
{
	t_stack	**stack_b;

	stack_b = NULL;
	if (!stack_a || !str_buffer)
		return (ERROR);
	return (ft_process_single_command(stack_a, stack_b, str_buffer));
}

void	ft_apply_commands(t_stack **stack_a, t_list *list_of_instru)
{
	int counter = 0;
	while (list_of_instru != NULL)
	{
		ft_process_command(stack_a, list_of_instru->str_buffer);
		counter++;
		list_of_instru = list_of_instru->next;
	}
	ft_printf("$$$$$$$$$$$|%d|\n", counter);
}
