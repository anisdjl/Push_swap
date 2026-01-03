/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:48:53 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 12:50:12 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_dnode **stack, t_dnode *new)
{
	t_dnode	*ptr;

	if (*stack == NULL)
		*stack = new;
	else
	{
		ptr = *stack;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}

int	ft_lstsize(t_dnode *lst)
{
	int	y;

	y = 0;
	while (lst)
	{
		lst = lst->next;
		y++;
	}
	return (y);
}

void	ft_lstadd_front(t_dnode **stack, t_dnode *new)
{
	new->next = *stack;
	*stack = new;
}
