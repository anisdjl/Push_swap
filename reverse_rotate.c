/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:24:15 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 15:47:52 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_dnode **stack_a)
{
	t_dnode	*tmp;
	t_dnode	*cursor;

	if (ft_lstsize(*stack_a) == 1 || !stack_a || !*stack_a)
		return ;
	cursor = *stack_a;
	while (cursor->next->next)
		cursor = cursor->next;
	tmp = *stack_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->prev = NULL;
	cursor->next = NULL;
	ft_lstadd_front(stack_a, tmp);
	(*stack_a)->prev = NULL;
	tmp->next->prev = *stack_a;
	*stack_a = tmp;
	tmp = NULL;
	cursor = NULL;
}

void	rrb(t_dnode **stack_b)
{
	t_dnode	*tmp;
	t_dnode	*cursor;

	if (ft_lstsize(*stack_b) == 1 || !stack_b || !*stack_b)
		return ;
	cursor = *stack_b;
	while (cursor->next->next)
		cursor = cursor->next;
	tmp = *stack_b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->prev = NULL;
	cursor->next = NULL;
	ft_lstadd_front(stack_b, tmp);
	(*stack_b)->prev = NULL;
	tmp->next->prev = *stack_b;
	*stack_b = tmp;
	tmp = NULL;
	cursor = NULL;
}

void	rrr(t_dnode **stack_a, t_dnode **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
