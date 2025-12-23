/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:24:15 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/23 18:07:46 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(dnode **stack_a)
{
	dnode	*tmp;
	dnode	*cursor;
	
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
	(*stack_a)->prev = tmp;
	*stack_a = tmp;
	tmp = NULL;
	cursor = NULL;
}

void	rrb(dnode **stack_b)
{
	dnode	*tmp;
	dnode	*cursor;
	
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
	(*stack_b)->prev = tmp;
	*stack_b = tmp;
	tmp = NULL;
	cursor = NULL;
}

void	rrr(dnode **stack_a, dnode **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}