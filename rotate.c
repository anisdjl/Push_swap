/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:33:50 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/02 14:25:31 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(dnode **stack_a)
{
	dnode	*tmp;
	dnode	*cursor;

	if (ft_lstsize(*stack_a) == 1 || !stack_a || !*stack_a)
		return ;
	cursor = *stack_a;
	while (cursor->next)
		cursor = cursor->next;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_a)->prev = NULL;
	tmp->next = NULL;
	ft_lstadd_back(stack_a, tmp);
	tmp->prev = cursor;
	tmp = NULL;
	cursor = NULL;
}

void	rb(dnode **stack_b)
{
	dnode	*tmp;
	dnode	*cursor;

	if (ft_lstsize(*stack_b) == 1 || !stack_b || !*stack_b)
		return ;
	cursor = *stack_b;
	while (cursor->next)
		cursor = cursor->next;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->prev = NULL;
	tmp->next = NULL;
	ft_lstadd_back(stack_b, tmp);
	tmp->prev = cursor;
	tmp = NULL;
	cursor = NULL;
}

void	rr(dnode **stack_a, dnode **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
