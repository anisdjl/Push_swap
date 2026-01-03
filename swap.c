/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:39:29 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 12:59:05 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_dnode *stack_a)
{
	int	tmp;

	if (!stack_a || ft_lstsize(stack_a) == 1)
		return ;
	tmp = stack_a->value;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = tmp;
}

void	sb(t_dnode *stack_b)
{
	int	tmp;

	if (!stack_b || ft_lstsize(stack_b) == 1)
		return ;
	tmp = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = tmp;
}

void	ss(t_dnode *stack_a, t_dnode *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
