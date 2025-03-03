/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:47:00 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 16:48:50 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_handlespaces(const char *str)
{
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

static const char	*ft_handlesign(const char *str, int *sign)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

long	ft_atol(const char *str)
{
	long long	number;
	int			sign;

	number = 0;
	sign = 1;
	str = ft_handlespaces(str);
	str = ft_handlesign(str, &sign);
	while (*str >= '0' && *str <= '9')
	{
		if (number > (LONG_MAX - (*str - '0')) / 10)
		{
			return (LONG_MAX);
		}
		number = number * 10 + (*str) - 48;
		str++;
	}
	number *= sign;
	return (number);
}
