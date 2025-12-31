/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_rotate_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:28:21 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/31 15:05:41 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final_rotate_a(dnode **stack_a)
{
	int	pos_min;

	pos_min = min_pos(*stack_a);
	if (pos_min > 0)
	{
		while (pos_min > 0)
		{
			ra(stack_a);
			ft_printf("ra\n");
			pos_min--;
		}
	}
	else if (pos_min < 0)
	{
		while (pos_min < 0)
		{
			rra(stack_a);
			ft_printf("rra\n");
			pos_min++;
		}
	}
}
