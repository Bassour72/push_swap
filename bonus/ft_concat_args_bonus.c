/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_args_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:06:34 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/02 15:10:18 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*ft_concat_args(char **argv, int argc)
{
	char	*number;
	int		i;
	char	*temp;

	if (!argv || !(*argv))
		return (NULL);
	number = ft_strjoin(argv[1], "");
	i = 2;
	while (i < argc)
	{
		temp = ft_strjoin(number, " ");
		free(number);
		number = ft_strjoin(temp, argv[i]);
		free(temp);
		i++;
	}
	if (ft_is_valid_valude(number) == -1)
	{
		free(number);
		return (NULL);
	}
	return (number);
}
