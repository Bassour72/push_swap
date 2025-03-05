/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_commands_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:21:37 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/02 15:57:18 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static	int	ft_is_command_valid(char *move)
{
	if (!move)
		return (ERROR);
	if (ft_strcmp(move, "sa\n") == 0 || ft_strcmp(move, "sb\n") == 0 || \
		ft_strcmp(move, "ss\n") == 0 || ft_strcmp(move, "pb\n") == 0 || \
		ft_strcmp(move, "pa\n") == 0 || ft_strcmp(move, "ra\n") == 0 || \
		ft_strcmp(move, "rb\n") == 0 || ft_strcmp(move, "rr\n") == 0 || \
		ft_strcmp(move, "rra\n") == 0 || ft_strcmp(move, "rrb\n") == 0 || \
		ft_strcmp(move, "rrr\n") == 0)
		return (SUCCESS);
	return (ERROR);
}

static	int	ft_validate_command(t_list **list, char *line)
{
	if (ft_is_command_valid(line) == ERROR)
	{
		ft_clean_command(list);
		return (ERROR);
	}
	return (SUCCESS);
}

static	int	ft_read_and_validate_command(t_list **list, char *line, int *result)
{
	t_list	*new;

	if (!line)
		return (0);
	if (ft_validate_command(list, line) == ERROR)
	{
		free(line);
		*result = -1;
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

t_list	*ft_parse_commands(int *result)
{
	t_list	*list_of_instru;
	char	*line;
	int		boolean;

	list_of_instru = NULL;
	boolean = 1;
	while (boolean)
	{
		line = get_next_line(STDIN_FILENO);
		boolean = ft_read_and_validate_command(&list_of_instru, line, result);
	}
	return (list_of_instru);
}
