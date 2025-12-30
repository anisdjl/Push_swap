/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:07:04 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/30 18:25:59 by adjelili         ###   ########.fr       */
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
	// ft_sort_the_3(stack_a);
	// push_to_a(stack_a, stack_b);
	// verify_the_min(stack_a);
}

void	push_to_b(dnode **stack_a, dnode **stack_b)
{
	int	size;
	int pos_max;

	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		ft_execute_best_pos(stack_a, stack_b, ft_find_best_cost(*stack_a, *stack_b));
		//ft_printf("%d\n", size);
		size--;
	}
	pos_max = pos_of_max(*stack_b);
	pos_max = find_pos(*stack_b, pos_max);
	ft_printf("%d", pos_max);
	if (pos_max != 0)
		final_rotate(stack_b, pos_max);
}

/*void	ft_sort_the_3(dnode **stack_a)
{
	// que des if et des else if + des printf
}*/

void	ft_execute_best_pos(dnode **stack_a, dnode **stack_b, best_pos best)
{
	
	if (is_positive(best.cost_a) && is_positive(best.cost_b))
		ft_execute_postive(stack_a, stack_b, best);
	else if (!is_positive(best.cost_a) && !is_positive(best.cost_b))
		ft_execute_negative(stack_a, stack_b, best);
	else
		ft_execute_else(stack_a, stack_b, best);
}
