/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_integer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:21:16 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/02 15:23:24 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_has_only_spaces(char *str)
{
	int	i;

	if (!str || !*str)
		return (ERROR);
	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (ERROR);
	return (SUCCESS);
}

int	ft_validate_integer(char *number)
{
	int	i;

	if (!number)
	{
		return (ERROR);
	}
	i = 0;
	while (number[i] != '\0')
	{
		if (number[i + 1] != '\0' && (number[i] == '+' || \
		number[i] == '-') && ft_isdigit(number[i + 1]) == 0)
		{
			return (ERROR);
		}
		i++;
	}
	if (ft_has_only_spaces(number) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
