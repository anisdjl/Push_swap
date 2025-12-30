/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 09:33:16 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/30 18:30:47 by adjelili         ###   ########.fr       */
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
		return ((size - pos) * -1);
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
	else
		plus_petit = pos_of_max(stack_b); // trouver le position du max
	return (find_pos(stack_b, plus_petit));
}
/* renvoie la postion */
int	find_pos(dnode *stack, int value)
{
	int pos;
	dnode	*tmp;
	
	tmp = stack;
	pos = 0;
	while(tmp->value != value)
	{
		tmp = tmp->next;
		pos++;
	}
	pos = ft_cost_a(stack, pos);
	return (pos);
}

best_pos	ft_find_best_cost(dnode *stack_a, dnode *stack_b)
{
	int			total;
	dnode		*tmp;
	int			pos;
	best_pos	best;
	
	total = 0;
	pos = 0;
	tmp = stack_a;
	best.best_cost = 2147483647;
	while (tmp)
	{
		total = ft_opti(ft_cost_a(stack_a, pos), ft_cost_b(stack_b, tmp->value));
		if (total < best.best_cost)
			update_best(&best, ft_cost_a(stack_a, pos), ft_cost_b(stack_b, tmp->value), pos, total);
		tmp = tmp->next;
		pos++;
	}
	return (best);
}

int	pos_of_max(dnode *stack_b)
{
	int	pos;
	int max;
	int pos_of_max;
	
	pos = 0;
	max = stack_b->value;
	pos_of_max = 0;
	while (stack_b)
	{
		if (stack_b->value > max)
		{
			max = stack_b->value;
			pos_of_max = pos;
		}
		stack_b = stack_b->next;
		pos++;
	}
	return (max);
}

// j'envoie les stacks a et b à une fonction qui va vider la stack_a (sauf 3 elements) dans b
// cette function calcule le cout total en calculant le cout de stack_a (c'est le nombre de ra ou de rra 
// la postion de l'element dans a)
// ensuite on cherche la target avec une fonction qui cherche la target puis calcule sa position et on obtient le calcul total)
// une fois qu'on a calcule le plus opti et on l'envoie dans b
// pour trouver le plus opti on fait une soustraction pour trouver les rr et les rrr 
// r->(+) et rr->(-) donc on fait la soustraction que si c'est du meme signe