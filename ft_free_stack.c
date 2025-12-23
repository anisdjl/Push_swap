/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:12:46 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/23 18:16:54 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(dnode **stack)
{
	dnode	*tmp;
	
	if (!stack || !*stack)
		return ;
	tmp = *stack;
	while (tmp && *stack)
	{
		*stack = (*stack)->next;
		free (tmp);
		tmp = *stack;
	}
}