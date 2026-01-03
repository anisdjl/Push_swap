/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 09:33:16 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 12:58:45 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cost_a(t_dnode *stack, int pos)
{
	int	size;

	if (!stack)
		return (0);
	size = ft_lstsize(stack);
	if (pos <= size / 2)
		return (pos);
	else
		return ((size - pos) * -1);
}

int	ft_cost_b(t_dnode *stack_b, int value)
{
	int		plus_petit;
	t_dnode	*ptr;

	ptr = stack_b;
	plus_petit = value;
	while (ptr && plus_petit == value)
	{
		if (ptr->value < value)
			plus_petit = ptr->value;
		ptr = ptr->next;
	}
	if (plus_petit != value)
	{
		ptr = stack_b;
		while (ptr)
		{
			if (ptr->value < value && ptr->value > plus_petit)
				plus_petit = ptr->value;
			ptr = ptr->next;
		}
	}
	else
		plus_petit = value_max(stack_b);
	return (find_pos(stack_b, plus_petit));
}

int	find_pos(t_dnode *stack, int value)
{
	int		pos;
	t_dnode	*tmp;

	if (!stack)
		return (0);
	tmp = stack;
	pos = 0;
	while (tmp && tmp->value != value)
	{
		tmp = tmp->next;
		pos++;
	}
	pos = ft_cost_a(stack, pos);
	return (pos);
}

t_best_pos	ft_find_best_cost(t_dnode *stack_a, t_dnode *stack_b)
{
	int			total;
	t_dnode		*tmp;
	int			pos;
	t_best_pos	best;

	total = 0;
	pos = 0;
	tmp = stack_a;
	best.best_cost = 2147483647;
	while (tmp)
	{
		total = ft_opti(ft_cost_a(stack_a, pos),
				ft_cost_b(stack_b, tmp->value));
		if (total < best.best_cost)
			update_best(&best, ft_cost_a(stack_a, pos),
				ft_cost_b(stack_b, tmp->value), pos);
		tmp = tmp->next;
		pos++;
	}
	return (best);
}

int	value_max(t_dnode *stack_b)
{
	int	pos;
	int	max;
	int	pos_of_max;

	pos = 0;
	max = stack_b->value;
	pos_of_max = 0;
	while (stack_b)
	{
		if (stack_b->value > max)
		{
			max = stack_b->value;
			pos_of_max = pos;
		}
		stack_b = stack_b->next;
		pos++;
	}
	return (max);
}
