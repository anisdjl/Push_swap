/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anis <anis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:12:46 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/24 20:40:17 by anis             ###   ########.fr       */
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
