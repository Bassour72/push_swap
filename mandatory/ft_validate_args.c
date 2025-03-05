/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:16:50 by ybassour          #+#    #+#             */
/*   Updated: 2025/02/13 20:56:17 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_validate_args(int argc, char	*argv[])
{
	(void)argv;
	if (argc <= 1)
		return (ERROR);
	return (SUCCESS);
}
