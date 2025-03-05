/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_duplicate_numbers_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:40:09 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 18:08:52 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_count_occurrences(char **numbers, char *target)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (numbers[i] != NULL)
	{
		if (ft_strcmp(numbers[i], target) == 0)
			count++;
		i++;
	}
	return (count);
}

int	ft_has_duplicate_numbers(char **numbers)
{
	int	i;

	if (!numbers || !(*numbers))
		return (ERROR);
	i = 0;
	while (numbers[i] != NULL)
	{
		if (ft_count_occurrences(numbers, numbers[i]) > 1)
			return (ERROR);
		i++;
	}
	return (SUCCESS);
}
