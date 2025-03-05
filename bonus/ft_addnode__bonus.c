/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnode__bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:13:45 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/02 14:14:02 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_list	*ft_addnode_(char *data)
{
	t_list	*new_node;

	if (!data)
		return (NULL);
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
	{
		free(data);
		return (NULL);
	}
	new_node->str_buffer = data;
	new_node->next = NULL;
	return (new_node);
}
