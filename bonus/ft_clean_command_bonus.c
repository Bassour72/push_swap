/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_command_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:16:19 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/02 14:16:47 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_clean_command(t_list **list)
{
	t_list	*temp;

	if (!list || !*list)
		return ;
	while (*list)
	{
		temp = *list;
		*list = (*list)->next;
		free(temp->str_buffer);
		free(temp);
	}
}
