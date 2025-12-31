/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:07:04 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/31 14:55:27 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(dnode **stack_a, dnode **stack_b)
{
	if (ft_lstsize(*stack_a) == 3)
	{
		ft_sort_the_3(stack_a);
		return ;
	}
	pb(stack_b, stack_a);
	ft_printf("pb\n");
	pb(stack_b, stack_a);
	ft_printf("pb\n");
	push_to_b(stack_a, stack_b);
	ft_sort_the_3(stack_a);
	push_to_a(stack_a, stack_b);
	// verify_the_min(stack_a);
}

void	push_to_b(dnode **stack_a, dnode **stack_b)
{
	int	size;
	int	max;
	int pos_max;

	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		ft_execute_best_pos(stack_a, stack_b, ft_find_best_cost(*stack_a, *stack_b));
		size--;
	}
	pos_max = value_max(*stack_b);
	max = find_max(*stack_b, pos_max);
	if (max != 0)
		final_rotate(stack_b, max);
}
void	ft_sort_the_3(dnode **stack_a)
{
    if ((*stack_a)->value < (*stack_a)->next->value
        && (*stack_a)->next->value < (*stack_a)->next->next->value)
        return ;
    else if ((*stack_a)->value > (*stack_a)->next->value
        && (*stack_a)->next->value > (*stack_a)->next->next->value)
    {
        ra(stack_a);
        ft_printf("ra\n");
        sa(*stack_a);
        ft_printf("sa\n");
    }
    else if ((*stack_a)->value < (*stack_a)->next->value
        && (*stack_a)->next->value > (*stack_a)->next->next->value
        && (*stack_a)->value < (*stack_a)->next->next->value)
    {
        rra(stack_a);
        ft_printf("rra\n");
        sa(*stack_a);
        ft_printf("sa\n");
    }
    else
        ft_sort_the_3_2(stack_a);
}

void	ft_sort_the_3_2(dnode **stack_a)
{
    if ((*stack_a)->value > (*stack_a)->next->value
        && (*stack_a)->next->value < (*stack_a)->next->next->value
        && (*stack_a)->value > (*stack_a)->next->next->value)
    {
        ra(stack_a);
        ft_printf("ra\n");
    }
    else if ((*stack_a)->value < (*stack_a)->next->value
        && (*stack_a)->next->value > (*stack_a)->next->next->value
        && (*stack_a)->value > (*stack_a)->next->next->value)
    {
        rra(stack_a);
        ft_printf("rra\n");
    }
    else if ((*stack_a)->value > (*stack_a)->next->value
        && (*stack_a)->next->value < (*stack_a)->next->next->value
        && (*stack_a)->value < (*stack_a)->next->next->value)
    {
        sa(*stack_a);
        ft_printf("sa\n");
    }
}

void	ft_execute_best_pos(dnode **stack_a, dnode **stack_b, best_pos best)
{
	
	if (is_positive(best.cost_a) && is_positive(best.cost_b))
		ft_execute_postive(stack_a, stack_b, best);
	else if (!is_positive(best.cost_a) && !is_positive(best.cost_b))
		ft_execute_negative(stack_a, stack_b, best);
	else
		ft_execute_else(stack_a, stack_b, best);
}
