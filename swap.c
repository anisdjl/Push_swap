/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:39:29 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/22 10:21:01 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

dnode	*sa(dnode *stack_a)
{
	int	tmp;
	
	if (!stack_a || ft_lstsize(stack_a) == 1)
		return (stack_a);
	tmp = stack_a->value;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = tmp;
	return (stack_a);
}

dnode	*sb(dnode *stack_b)
{
	int	tmp;
	
	if (!stack_b || ft_lstsize(stack_b) == 1)
		return (stack_b);
	tmp = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = tmp;
	return (stack_b);
}

void	ss(dnode *stack_a, dnode *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}