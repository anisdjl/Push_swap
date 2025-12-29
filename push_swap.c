/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:07:04 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/29 15:21:41 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(dnode **stack_a, dnode **stack_b)
{
	pb(stack_b, stack_a);
	ft_printf("pb\n");
	pb(stack_b, stack_a);
	ft_printf("pb\n");
	push_to_b(stack_a, stack_b);
	ft_sort_the_3(stack_a);
	push_to_a(stack_a, stack_b);
	verify_the_min(stack_a);
}

void	push_to_b(dnode **stack_a, dnode **stack_b)
{
	int	pos;
	
	while (ft_lstsize(stack_a) > 3)
	{
		ft_find_best_cost(stack_a, stack_b);
		ft_execute_best_pos(stack_a, stack_b, ft_find_best_cost(*stack_a, *stack_b)); // elle qui va push rotate etc et ecrire pb etc mais elle doit aussi recalculer 
		// ce qu'elle doit envoyer
	}
}

void	ft_sort_the_3(dnode **stack_a)
{
	// que des if et des else if + des printf
}

void	ft_execute_best_pos(dnode **stack_a, dnode **stack_b, best_pos best)
{
	if (is_positive(best.cost_a) && is_sign(best.cost_a))
	{
		
	}
}