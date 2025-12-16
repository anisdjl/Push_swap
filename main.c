/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:00:17 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/16 14:38:33 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct	dnode
{
	int	value;
	struct dnode *next;
	struct dnode *prev;
} dnode;

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
	new_node->value = value;
	new_node->next = stack;
	new_node->prev = NULL;
	stack = new_node;

	return (new_node);
}

int	main(int argc, char **argv)
{
	int	i;
	dnode *stack = NULL;

	i = argc - 1;
	if (ft_check_digit(argc, argv) && ft_check_dup(argc, argv))
	{
		while (i > 0)
		{
			stack = push_node(stack, ft_atoi(argv[i]));
			i--;
		}
	}
	else
		ft_printf("Error\n");
	display(stack);

	free(stack);
	stack = NULL;

	return (0);
}
