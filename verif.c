/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:52:08 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/02 14:46:25 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(dnode *stack_a)
{
	dnode	*ptr;

	ptr = stack_a;
	while (ptr->next)
	{
		if (ptr->value > ptr->next->value)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}

void	write_error(dnode **stack)
{
	write(2, "Error\n", 6);
	ft_free_stack(stack);
	exit(EXIT_FAILURE);
}

void	ft_execute_positive2(dnode **stack_a, dnode **stack_b, best_pos best)
{
	while (best.cost_b > 0)
	{
		rb(stack_b);
		ft_printf("rb\n");
		best.cost_b--;
	}
}

void	ft_execute_negative2(dnode **stack_a, dnode **stack_b, best_pos best)
{
	while (best.cost_b < 0)
	{
		rrb(stack_b);
		ft_printf("rrb\n");
		best.cost_b++;
	}	
}
