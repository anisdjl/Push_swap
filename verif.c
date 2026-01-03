/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:52:08 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 15:29:13 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_dnode *stack_a)
{
	t_dnode	*ptr;

	ptr = stack_a;
	while (ptr->next)
	{
		if (ptr->value > ptr->next->value)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}

void	write_error(t_dnode **stack)
{
	write(2, "Error\n", 6);
	ft_free_stack(stack);
	exit(EXIT_FAILURE);
}

void	ft_execute_positive2(t_dnode **stack_b, t_best_pos best)
{
	while (best.cost_b > 0)
	{
		rb(stack_b);
		ft_printf("rb\n");
		best.cost_b--;
	}
}

void	ft_execute_negative2(t_dnode **stack_b, t_best_pos best)
{
	while (best.cost_b < 0)
	{
		rrb(stack_b);
		ft_printf("rrb\n");
		best.cost_b++;
	}	
}

int	only_spaces(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != ' ')
			return (0);
		else
			i++;
	}
	return (1);
}
