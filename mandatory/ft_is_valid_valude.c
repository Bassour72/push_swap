/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_valude.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:09:24 by ybassour          #+#    #+#             */
/*   Updated: 2025/02/13 15:10:29 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_is_space(char c)
{
	return (c == ' ' || c == '+' || c == '-');
}

int	ft_is_valid_valude(char *valu)
{
	int	i;

	if (!valu)
		return (ERROR);
	i = 0;
	while (valu[i] != '\0')
	{
		if (ft_isdigit(valu[i]) == 0 && ft_is_space(valu[i]) == 0)
			return (ERROR);
		i++;
	}
	return (SUCCESS);
}
