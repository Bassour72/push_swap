/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_stack_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:45:06 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/02 14:58:25 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*ft_build_stack(int argc, char **argv)
{
	t_stack	*stack;
	char	**numbers;

	if (argc < 2)
		return (NULL);
	numbers = ft_parse_and_validate_input(argv, argc);
	if (!numbers || !(*numbers))
		return (NULL);
	stack = ft_create_stack(numbers);
	ft_free_argv(numbers);
	if (!stack)
		return (NULL);
	if (ft_contains_duplicates(stack) == -1)
	{
		ft_clear_stack(stack);
		return (NULL);
	}
	return (stack);
}
