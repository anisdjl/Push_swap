/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_rotate_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:28:21 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 15:10:54 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final_rotate_a(t_dnode **stack_a)
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

void	ft_sort_the_2(t_dnode **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
	{
		sa(*stack_a);
		ft_printf("sa\n");
	}
	return ;
}
