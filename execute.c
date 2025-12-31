/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:07:50 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/31 10:17:48 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execute_postive(dnode **stack_a, dnode **stack_b, best_pos best)
{
	while (best.cost_a > 0 && best.cost_b > 0)
	{
		rr(stack_a, stack_b);
		ft_printf("rr\n");
		best.cost_a--;
		best.cost_b--;			
	}
	if (best.cost_a > 0)
	{
		while (best.cost_a > 0)
		{
			ra(stack_a);
			ft_printf("ra\n");
			best.cost_a--;
		}
	}
	else if (best.cost_b > 0)
	{
		while (best.cost_b > 0)
		{
			rb(stack_b);
			ft_printf("rb\n");
			best.cost_b--;
		}	
	}
	pb(stack_b, stack_a);
	ft_printf("pb\n");
}

void	ft_execute_negative(dnode **stack_a, dnode **stack_b, best_pos best)
{
	while (best.cost_a < 0 && best.cost_b < 0)
	{
		rrr(stack_a, stack_b);
		ft_printf("rrr\n");
		best.cost_a++;
		best.cost_b++;			
	}
	if (best.cost_a < 0)
	{
		while (best.cost_a < 0)
		{
			rra(stack_a);
			ft_printf("rra\n");
			best.cost_a++;
		}
	}
	else if (best.cost_b < 0)
	{
		while (best.cost_b < 0)
		{
			rrb(stack_b);
			ft_printf("rrb\n");
			best.cost_b++;
		}	
	}
	pb(stack_b, stack_a);
	ft_printf("pb\n");
}

void	ft_execute_else(dnode **stack_a, dnode **stack_b, best_pos best)
{
	if (is_positive(best.cost_a) && !is_positive(best.cost_b))
	{
		while (best.cost_a > 0)
		{
			ra(stack_a);
			ft_printf("ra\n");
			best.cost_a--;
		}
		while (best.cost_b < 0)
		{
			rrb(stack_b);
			ft_printf("rrb\n");
			best.cost_b++;
		}
		pb(stack_b, stack_a);
		ft_printf("pb\n");
	}
	else if (!is_positive(best.cost_a) && is_positive(best.cost_b))
		ft_execute_else2(stack_a, stack_b, best);
}

void	ft_execute_else2(dnode **stack_a, dnode **stack_b, best_pos best)
{
	while (best.cost_a < 0)
	{
		rra(stack_a);
		ft_printf("rra\n");
		best.cost_a++;
	}
	while (best.cost_b > 0)
	{
		rb(stack_b);
		ft_printf("rb\n");
		best.cost_b--;
	}
	pb(stack_b, stack_a);
	ft_printf("pb\n");
}

void	final_rotate(dnode **stack_b, int pos)
{
	if (pos > 0)
	{
		while (pos > 0)
		{
			rb(stack_b);
			ft_printf("rb\n");
			pos--;
		}
	}
	else
		while (pos < 0)
		{
			rrb(stack_b);
			ft_printf("rrb\n");
			pos++;
		}
}
