/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_number_list_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:43:26 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 18:07:49 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_is_numeric_string(const char *str)
{
	int	i;

	if (!str || *str == '\0')
		return (ERROR);
	i = 0;
	if (str[i + 1] != '\0' && (str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i] != '\0')
	{
		if (!ft_isdigit((unsigned char)str[i]))
			return (ERROR);
		i++;
	}
	return (SUCCESS);
}

static int	ft_has_valid_signs(const char *number)
{
	int	i;
	int	sign_count;

	if (!number)
		return (ERROR);
	i = 0;
	sign_count = 0;
	while (number[i] != '\0')
	{
		if (number[i] == '-' || number[i] == '+')
		{
			if (i > 0 || sign_count > 0)
				return (ERROR);
			sign_count = 1;
		}
		i++;
	}
	return (SUCCESS);
}

int	ft_validate_number_list(char **numbers)
{
	int	i;

	if (!numbers)
		return (ERROR);
	i = 0;
	while (numbers[i] != NULL)
	{
		if (ft_has_valid_signs(numbers[i]) == ERROR || \
		ft_is_numeric_string(numbers[i]) == ERROR)
			return (ERROR);
		i++;
	}
	return (SUCCESS);
}
