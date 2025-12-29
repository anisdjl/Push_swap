/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 09:33:16 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/29 15:21:49 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* elle renvoie la position qui est le nombre de ra ou de rra a faire */
int	ft_cost_a(dnode *stack, int pos)
{
	int	size;
	
	if (!stack)
		return (1);
	size = ft_lstsize(stack);
	if (pos <= size / 2)
		return (pos);
	else
		return (size - pos);
}
/* elle renvoie la pos de la cible qui est le nombre de rb ou rrb a faire */
int	ft_cost_b(dnode *stack_b, int value)
{
	int		plus_petit;
	dnode	*ptr;

	ptr = stack_b;
	plus_petit = value;
	while (ptr && plus_petit == value)
	{
		if (ptr->value < value)
			plus_petit = ptr->value;
		ptr = ptr->next;
	}
	if (plus_petit != value)
	{
		ptr = stack_b;
		while (ptr)
		{
			if (ptr->value < value && ptr->value > plus_petit)
				plus_petit = ptr->value;
			ptr = ptr->next;
		}
	}
	return (find_pos);
}
/* renvoie la postion */
int	find_pos(dnode *stack, int value)
{
	int pos;
	
	pos = 1;
	while(stack)
	{
		if (stack->value != value)
		{	
			stack = stack->next;
			pos++;
		}
	}
	return (pos);
}

best_pos	ft_find_best_cost(dnode *stack_a, dnode *stack_b)
{
	int	total;
	int	cost_a;
	int cost_b;
	int	pos;
	best_pos	best;
	
	total = 0;
	pos = 1;
	best.best_cost = 2147483647;
	while (stack_a)
	{
		cost_a = ft_cost_a(stack_a, pos);
		cost_b = ft_cost_b(stack_b, stack_a->value);
		total = ft_opti(cost_a, cost_b);
		if (total < best.best_cost)
		{
			best.cost_a = cost_a;
			best.cost_b = cost_b;
			best.pos = pos;
			best.best_cost = total;
		}
		pos++;
	}
	return (best);
}

int	ft_opti(int cost_a, int cost_b)
{
	int	total;
	
	if (cost_a > 0 && cost_b > 0)
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
		total = cost_a + cost_b;
	return (total);
}

// j'envoie les stacks a et b à une fonction qui va vider la stack_a (sauf 3 elements) dans b
// cette function calcule le cout total en calculant le cout de stack_a (c'est le nombre de ra ou de rra 
// la postion de l'element dans a)
// ensuite on cherche la target avec une fonction qui cherche la target puis calcule sa position et on obtient le calcul total)
// une fois qu'on a calcule le plus opti et on l'envoie dans b
// pour trouver le plus opti on fait une soustraction pour trouver les rr et les rrr 
// r->(+) et rr->(-) donc on fait la soustraction que si c'est du meme signe