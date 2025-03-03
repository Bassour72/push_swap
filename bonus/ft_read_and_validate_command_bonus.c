/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_and_validate_command_bonus.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:24:06 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/03 09:40:32 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_read_and_validate_command(t_list **list, char *line)
{
	t_list	*new;

	if (!line)
		return (0);
	if (ft_validate_command(list, line) == ERROR)
	{
		free(line);
		return (0);
	}
	new = ft_addnode_(line);
	if (!new)
	{
		free(line);
		ft_clean_command(list);
		return (0);
	}
	ft_lstadd_back(list, new);
	return (SUCCESS);
}
