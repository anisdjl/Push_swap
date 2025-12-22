/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:27:52 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/22 11:36:08 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

dnode	*pa(dnode *stack_a, dnode *stack_b)
{
	dnode	*tmp;
	
	if (!stack_b)
		return (stack_a);
	tmp = stack_b;
	tmp->value = stack_b->value;
	if (ft_lstsize(stack_b) != 1)
		stack_b = stack_b->next;
	else
		stack_b = NULL;
	stack_b->prev = NULL;
	tmp->next = NULL;
	tmp->next = stack_a;
	tmp->prev = NULL;
	stack_a->prev = tmp;
	stack_a = tmp;
	return (stack_a);
}

/*dnode	*pb(dnode *stack_b, dnode *stack_a)
{
	if (!stack_a)
		return (stack_b);
	return(stack_b);
}*/