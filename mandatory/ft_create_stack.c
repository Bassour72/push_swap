/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:16:15 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 16:47:33 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_check_number(long int_number, int *number)
{
	*number = int_number;
	if (int_number < INT_MIN)
		return (ERROR);
	if (int_number > INT_MAX)
		return (ERROR);
	return (SUCCESS);
}

t_stack	*ft_create_stack(char **argv)
{
	int		i;
	t_stack	*stack;
	t_stack	*new;
	int		value;

	if (!argv || !(*argv))
		return (NULL);
	i = 0;
	stack = NULL;
	value = 0;
	while (argv[i] != NULL)
	{
		if (ft_check_number(ft_atol(argv[i]), &value) == ERROR)
		{
			ft_clear_stack(stack);
			return (NULL);
		}
		new = ft_create_node(value);
		if (!new)
			return (ft_clear_stack(stack), NULL);
		ft_stack_add_(&stack, new);
		i++;
	}
	return (stack);
}
