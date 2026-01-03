/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:00:17 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 15:31:24 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dnode	*push_node(t_dnode *stack, int value)
{
	t_dnode	*new_node;

	new_node = malloc(sizeof(t_dnode));
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

int	main(int argc, char **argv)
{
	t_dnode	*stack_a;
	t_dnode	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	else if ((argc == 2 && (argv[1][0] == '\0' || only_spaces(argv))))
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	stack_a = ft_parse(argc, argv, stack_a);
	push_swap(&stack_a, &stack_b);
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
