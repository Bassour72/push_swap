/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isutilsflags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 01:10:23 by ybassour          #+#    #+#             */
/*   Updated: 2024/12/02 01:12:20 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isutilsflags(char c)
{
	return (ft_isdigit(c) || ft_isflgs(c) || ft_isspecifiertype(c));
}
