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

int	main(int argc, char *argv[])
{
	t_stack	*stack_b;
	t_stack	*stack_a;

	stack_b = NULL;
	if (argc < 2)
		return (0);
	stack_a = ft_build_stack(argc, argv);
	if (!stack_a)
	{
		ft_putendl_fd("Error", STDERR_FD);
		return (FAILED);
	}
	if (ft_set_index(&stack_a) == ERROR)
	{
		ft_clear_stack(stack_a);
		ft_putendl_fd("Error", STDERR_FD);
		return (FAILED);
	}
	ft_sort(&stack_a, &stack_b);
	ft_clear_stack(stack_a);
	return (0);
}
