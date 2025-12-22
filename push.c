/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:27:52 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/22 17:29:47 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(dnode **stack_a, dnode **stack_b)
{
	dnode	*tmp;

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

void	pb(dnode **stack_b, dnode **stack_a)
{
	dnode	*tmp;

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
