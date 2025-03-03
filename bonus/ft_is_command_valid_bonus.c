/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_command_valid_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:26:34 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/03 09:29:36 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_is_command_valid(char *move)
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
