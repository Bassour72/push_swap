/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_command_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:24:38 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/03 09:29:45 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_validate_command(t_list **list, char *line)
{
	if (ft_is_command_valid(line) == ERROR)
	{
		ft_clean_command(list);
		return (ERROR);
	}
	return (SUCCESS);
}
