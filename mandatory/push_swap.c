/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:16:33 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/02 15:39:52 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*tmp_b;
	t_stack	*tmp_a;

	ft_printf("\nStack A: ");
	tmp_a = stack_a;
	while (tmp_a)
	{
		ft_printf(" %d | %d ", tmp_a->val, tmp_a->index);
		tmp_a = tmp_a->next;
	}
	ft_printf("\nStack B: ");
	tmp_b = stack_b;
	while (tmp_b)
	{
		ft_printf("%d ", tmp_b->val);
		tmp_b = tmp_b->next;
	}
	ft_printf("\n-------------------\n");
}

void	f(void)
{
	system("leaks -c push_swap");
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_b;
	t_stack	*stack_a;

	//atexit(f);
	stack_b = NULL;
	stack_a = ft_build_stack(argc, argv);
	if (!stack_a)
	{
		ft_putendl_fd("Error", STDERR_FD);
		return (ERROR);
	}
	if (ft_set_index(&stack_a) == ERROR)
	{
		ft_clear_stack(stack_a);
		ft_putendl_fd("Error", STDERR_FD);
		return (ERROR);
	}
	//print_stacks(stack_a, stack_b);
	ft_sort(&stack_a, &stack_b);
	ft_clear_stack(stack_a);
	return (0);
}
