/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_resources.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 09:33:16 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/26 11:23:03 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calcul_pos(dnode *stack, int pos)
{
	int	size;
	
	size = ft_lstsize(stack);
	if (pos <= size / 2)
		return (pos);
	else
		return (size - pos);
}

int	calcul_cost(dnode *stack_a, dnode *stack_b)
{
	int	pos;
	
}