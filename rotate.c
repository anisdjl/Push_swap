/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:33:50 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 12:56:44 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_dnode **stack_a)
{
	t_dnode	*tmp;
	t_dnode	*cursor;

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

void	rb(t_dnode **stack_b)
{
	t_dnode	*tmp;
	t_dnode	*cursor;

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

void	rr(t_dnode **stack_a, t_dnode **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
