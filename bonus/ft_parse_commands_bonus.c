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

t_list	*ft_parse_commands(void)
{
	t_list	*list_of_instru;
	char	*line;
	int		boolean;

	list_of_instru = NULL;
	boolean = 1;
	while (boolean)
	{
		line = get_next_line(0);
		boolean = ft_read_and_validate_command(&list_of_instru, line);
	}
	return (list_of_instru);
}
