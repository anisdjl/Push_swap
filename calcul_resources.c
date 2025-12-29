/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_resources.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anis <anis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 09:33:16 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/28 14:21:28 by anis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calcul_pos(dnode *stack, int pos)
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

int	search_pos_b(dnode *stack)
{
	
}

int calcul_at_a_given_postion(dnode *stack, int pos)
{
	
}

void	execute_rules(dnode **stack_a, dnode **stack_b, int cost_a, int cost_b)
{
	
}

int	calcul_cost(dnode *stack_a, dnode *stack_b)
{
	int	total;
	int	best_pos;
	
	while (ft_lstsize(stack_a) > 3)
	{
		total = 
	}
}




// j'envoie les stacks a et b à une fonction qui va vider la stack_a (sauf 3 elements) dans b
// cette function calcule le cout total en calculant le cout de stack_a (c'est le nombre de ra ou de rra 
// la postion de l'element dans a)
// ensuite on cherche la target avec une fonction qui cherche la target puis calcule sa position et on obtient le calcul total)
// une fois qu'on a calcule le plus opti et on l'envoie dans b
// pour trouver le plus opti on fait une soustraction pour trouver les rr et les rrr 
// r->(+) et rr->(-) donc on fait la soustraction que si c'est du meme signe