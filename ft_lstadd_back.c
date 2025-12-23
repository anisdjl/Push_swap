/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:48:53 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/23 17:06:50 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(dnode **stack, dnode *new)
{
	dnode	*ptr;

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
