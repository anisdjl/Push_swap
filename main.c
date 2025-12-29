/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:00:17 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:44 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display(dnode *stack)
{
	dnode	*temp = stack;

	if (!stack)
		ft_printf("The stack is empty");
	while (temp)
	{
		ft_printf("%d | ", temp->value);
		temp = temp->next;
	}

	temp = NULL;
}

dnode	*push_node(dnode *stack, int value)
{
	dnode	*new_node = malloc(sizeof(dnode));
	if (!new_node)
	{
		free (stack);
		return (NULL);
	}
	if (stack == NULL)
	{
		new_node->prev = NULL;
		new_node->value = value;
		new_node->next = NULL;
	}
	else
	{
		new_node->value = value;
		new_node->next = stack;
		new_node->prev = NULL;
		stack->prev = new_node;
		stack = new_node;
	}
	return (new_node);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	dnode *stack_a = NULL;
	dnode *stack_b = NULL;
	
	stack_a = ft_parse(argc, argv, stack_a);
	push_swap(&stack_a, &stack_b);

	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);

	return (0);
}
