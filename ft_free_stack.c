/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:12:46 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 12:48:59 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_dnode **stack)
{
	t_dnode	*tmp;

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
