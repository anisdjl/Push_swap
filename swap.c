/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:39:29 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/02 14:25:53 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(dnode *stack_a)
{
	int	tmp;

	if (!stack_a || ft_lstsize(stack_a) == 1)
		return ;
	tmp = stack_a->value;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = tmp;
}

void	sb(dnode *stack_b)
{
	int	tmp;

	if (!stack_b || ft_lstsize(stack_b) == 1)
		return ;
	tmp = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = tmp;
}

void	ss(dnode *stack_a, dnode *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
