/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimistaion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 10:55:33 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/30 15:22:21 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_positive(int value)
{
	if (value >= 0)
		return (1);
	return (0);
}

int	ft_opti(int cost_a, int cost_b)
{
	int	total;

	if (cost_a >= 0 && cost_b >= 0)
	{
		if (cost_a > cost_b)
			total = cost_a;
		else
			total = cost_b;
	}
	else if (cost_a < 0 && cost_b < 0)
	{
		if (cost_a < cost_b)
			total = cost_a * (-1);
		else
			total = cost_b * (-1);
	}
	else
		total = ft_opti2(cost_a, cost_b);
	return (total);
}

int	ft_opti2(int cost_a, int cost_b)
{
	int	total;

	if (cost_a < 0 && cost_b > 0)
		total = cost_a * (-1) + cost_b;
	else
		total = cost_a + cost_b * (-1);
	return (total);
}

void	update_best(best_pos *best, int cost_a, int cost_b, int pos, int total)
{
	(*best).best_cost = total;
	(*best).pos = pos;
	(*best).cost_a = cost_a;
	(*best).cost_b = cost_b;
}