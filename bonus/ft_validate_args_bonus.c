/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_args_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:16:50 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 18:10:23 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_validate_args(int argc, char	*argv[])
{
	(void)argv;
	if (argc <= 1)
		return (ERROR);
	return (SUCCESS);
}
