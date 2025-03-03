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

static void	ft_process_commands(t_stack **stack_a)
{
	t_list	*list_of_instru;

	list_of_instru = ft_parse_commands();
	if (!list_of_instru && !stack_a)
		return ;
	ft_apply_commands(stack_a, list_of_instru);
	if (!*stack_a)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		return ;
	}
	if (ft_check_sort(stack_a) == ERROR)
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
	ft_clean_command(&list_of_instru);
}
void	f(void)
{
	system("leaks -c checker");
}
void	print_stacks(t_stack *stack_a)
{
	t_stack	*tmp_a;

	ft_printf("\nStack A: ");
	tmp_a = stack_a;
	while (tmp_a)
	{
		ft_printf(" %d |", tmp_a->val);
		tmp_a = tmp_a->next;
	}
	ft_printf("\n-------------------\n");
}
int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	//atexit(f);
	if (argc == 1)
		return (0);
	stack_a = ft_handle_stack_building(argc, argv);
	if (!stack_a)
		return (0);
	ft_process_commands(&stack_a);
	print_stacks(stack_a);
	ft_clear_stack(stack_a);
	return (0);
}

