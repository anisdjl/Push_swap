/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:49:54 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/02 14:41:03 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(dnode **stack_a, dnode **stack_b)
{
	int	pos;

	while (ft_lstsize(*stack_b) > 0)
	{
		if (is_max(*stack_a, (*stack_b)->value))
			pos = min_pos(*stack_a);
		else
			pos = find_the_target(*stack_a, (*stack_b)->value);
		ft_final_pushes(stack_a, stack_b, pos);
	}
	final_rotate_a(stack_a);
}

int	is_max(dnode *stack_a, int value)
{
	dnode	*tmp;

	tmp = stack_a;
	while (tmp)
	{
		if (tmp->value > value)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}

int	find_the_target(dnode *stack_a, int value)
{
	int		plus_grand;
	dnode	*ptr;

	ptr = stack_a;
	plus_grand = value;
	while (ptr && plus_grand == value)
	{
		if (ptr->value > value)
			plus_grand = ptr->value;
		ptr = ptr->next;
	}
	if (plus_grand != value)
	{
		ptr = stack_a;
		while (ptr)
		{
			if (ptr->value > value && ptr->value < plus_grand)
				plus_grand = ptr->value;
			ptr = ptr->next;
		}
	}
	return (find_pos(stack_a, plus_grand));
}

int	min_pos(dnode *stack_a)
{
	int		min;
	int		pos;
	dnode	*tmp;

	tmp = stack_a;
	min = tmp->value;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	pos = find_max(stack_a, min);
	return (pos);
}

void	ft_final_pushes(dnode **stack_a, dnode **stack_b, int pos)
{
	if (pos > 0)
	{
		while (pos > 0)
		{
			ra(stack_a);
			ft_printf("ra\n");
			pos--;
		}
	}
	else if (pos < 0)
	{
		while (pos < 0)
		{
			rra(stack_a);
			ft_printf("rra\n");
			pos++;
		}
	}
	pa(stack_a, stack_b);
	ft_printf("pa\n");
}
