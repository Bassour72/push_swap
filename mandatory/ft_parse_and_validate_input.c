/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_and_validate_input.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:17:36 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 16:08:54 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_parse_and_validate_input(char **argv, int argc)
{
	char	*joined_args;
	char	**split_numbers;

	joined_args = ft_concat_args(argv, argc);
	if (!joined_args)
		return (NULL);
	if (ft_validate_integer(joined_args) == ERROR)
	{
		free(joined_args);
		return (NULL);
	}
	split_numbers = ft_split(joined_args, ' ');
	free(joined_args);
	if (!split_numbers || !(*split_numbers))
		return (NULL);
	if (ft_validate_number_list(split_numbers) == ERROR || \
		ft_has_duplicate_numbers(split_numbers) == ERROR)
	{
		ft_free_argv(split_numbers);
		return (NULL);
	}
	return (split_numbers);
}
