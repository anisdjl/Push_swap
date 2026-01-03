/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:27:52 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 12:55:19 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_dnode **stack_a, t_dnode **stack_b)
{
	t_dnode	*tmp;

	if (!stack_b || !*stack_b)
		return ;
	tmp = *stack_b;
	tmp->value = (*stack_b)->value;
	if (ft_lstsize(*stack_b) == 1)
	{
		*stack_b = NULL;
		tmp->next = *stack_a;
		tmp->prev = NULL;
	}
	else
	{
		*stack_b = (*stack_b)->next;
		(*stack_b)->prev = NULL;
		tmp->next = *stack_a;
		tmp->prev = NULL;
	}
	if (*stack_a)
		(*stack_a)->prev = tmp;
	*stack_a = tmp;
	tmp = NULL;
}

void	pb(t_dnode **stack_b, t_dnode **stack_a)
{
	t_dnode	*tmp;

	if (!stack_a || !*stack_a)
		return ;
	tmp = *stack_a;
	tmp->value = (*stack_a)->value;
	if (ft_lstsize(*stack_a) != 1)
	{
		*stack_a = (*stack_a)->next;
		(*stack_a)->prev = NULL;
		tmp->next = *stack_b;
		tmp->prev = NULL;
	}
	else
	{
		*stack_a = NULL;
		tmp->next = *stack_b;
		tmp->prev = NULL;
	}
	if (*stack_b)
		(*stack_b)->prev = tmp;
	*stack_b = tmp;
	tmp = NULL;
}
