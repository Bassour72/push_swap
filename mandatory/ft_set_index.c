/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:24:47 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 16:18:32 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*extract_values(t_stack *stack, int size)
{
	int		*arr;
	t_stack	*temp;
	int		i;

	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	temp = stack;
	i = 0;
	if (!arr)
		return (NULL);
	while (temp)
	{
		arr[i] = temp->val;
		i++;
		temp = temp->next;
	}
	return (arr);
}

static void	bubble_sort(int *arr, int size)
{
	int	swapped;
	int	tmp;
	int	i;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}
}

static void	set_stack_index(t_stack *stack, int *arr, int size)
{
	t_stack	*temp;
	int		i;

	temp = stack;
	while (temp)
	{
		i = 0;
		while (i < size)
		{
			if (temp->index == -1 && temp->val == arr[i])
			{
				temp->index = i;
				break ;
			}
			i++;
		}
		temp = temp->next;
	}
}

int	ft_set_index(t_stack **stack)
{
	int	size;
	int	*arr;

	if (!stack || !(*stack))
		return (ERROR);
	size = ft_stack_size(*stack);
	arr = extract_values(*stack, size);
	if (!arr)
		return (ERROR);
	bubble_sort(arr, size);
	set_stack_index(*stack, arr, size);
	free(arr);
	return (SUCCESS);
}
