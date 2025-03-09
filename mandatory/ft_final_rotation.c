/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_rotation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:10:41 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/09 14:10:41 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_final_rotation(t_stack **stack_a)
{
	int	min_pos;

	min_pos = ft_find_min_index_position(*stack_a);
	ft_rotate_to_position(stack_a, min_pos);
}
