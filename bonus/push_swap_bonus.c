/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:16:33 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/03 11:32:13 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static	int	ft_isempty(t_stack **stack_b)
{
	if (!stack_b || !(*stack_b))
		return (SUCCESS);
	return (ERROR);
}

static t_stack	*ft_handle_stack_building(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = ft_build_stack(argc, argv);
	if (!stack_a)
	{
		ft_clear_stack(stack_a);
		ft_putendl_fd("Error", STDERR_FILENO);
		return (NULL);
	}
	return (stack_a);
}

static	void	ft_process_commands(t_stack **stack_a, t_stack	**stack_b)
{
	t_list	*list_of_instru;
	int		result;

	if (!stack_a)
		return ;
	result = 0;
	list_of_instru = ft_parse_commands(&result);
	if (!list_of_instru && result == ERROR)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		return ;
	}
	ft_apply_commands(stack_a, stack_b, list_of_instru);
	if (!*stack_a && !*stack_b)
	{
		ft_clean_command(&list_of_instru);
		ft_putendl_fd("Error", STDERR_FILENO);
		return ;
	}
	if (ft_check_sort(stack_a) == ERROR || ft_isempty(stack_b) == ERROR)
		ft_printf("KO\n");
	else if (ft_check_sort(stack_a))
		ft_printf("OK\n");
	ft_clean_command(&list_of_instru);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	if (argc == 1)
		return (0);
	stack_a = ft_handle_stack_building(argc, argv);
	if (!stack_a)
		return (1);
	ft_process_commands(&stack_a, &stack_b);
	ft_clear_stack(stack_b);
	ft_clear_stack(stack_a);
	return (0);
}
