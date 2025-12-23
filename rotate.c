/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:33:50 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/23 10:22:35 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(dnode **stack_a)
{
	dnode	*tmp;
	
	if (ft_lstsize(*stack_a) == 1)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	
}

void	rb(dnode **stack_b)
{

}

void	rr(dnode **stack_a, dnode **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}