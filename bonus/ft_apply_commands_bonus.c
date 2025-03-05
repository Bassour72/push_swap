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

int	ft_process_single_command(t_stack **stack_a, t_stack **stack_b, \
	char *command)
{
	if (ft_strcmp(command, "pb\n") == 0)
		ft_push_in_b(stack_a, stack_b);
	else if (ft_strcmp(command, "pa\n") == 0)
		ft_push_in_a(stack_a, stack_b);
	else if (ft_strcmp(command, "sb\n") == 0)
		ft_swap_b(stack_b);
	else if (ft_strcmp(command, "sa\n") == 0)
		ft_swap_a(stack_a);
	else if (ft_strcmp(command, "ss\n") == 0)
		ft_swap_a_and_b(stack_a, stack_b);
	else if (ft_strcmp(command, "rb\n") == 0)
		ft_rotate_b(stack_b);
	else if (ft_strcmp(command, "ra\n") == 0)
		ft_rotate_a(stack_a);
	else if (ft_strcmp(command, "rr\n") == 0)
		ft_rotate_a_and_b(stack_a, stack_b);
	else if (ft_strcmp(command, "rrb\n") == 0)
		ft_reverse_rotate_b(stack_b);
	else if (ft_strcmp(command, "rra\n") == 0)
		ft_reverse_rotate_a(stack_a);
	else if (ft_strcmp(command, "rrr\n") == 0)
		ft_reverse_rotate_ab(stack_a, stack_b);
	else
		return (ERROR);
	return (SUCCESS);
}

static	int	ft_process_command(t_stack **stack_a, t_stack **stack_b, \
	char *str_buffer)
{
	if (!stack_a || !stack_b || !str_buffer)
		return (ERROR);
	return (ft_process_single_command(stack_a, stack_b, str_buffer));
}

void	ft_apply_commands(t_stack **stack_a, t_stack **stack_b, \
	t_list *list_of_instru)
{
	while (list_of_instru != NULL)
	{
		ft_process_command(stack_a, stack_b, list_of_instru->str_buffer);
		list_of_instru = list_of_instru->next;
	}
}
