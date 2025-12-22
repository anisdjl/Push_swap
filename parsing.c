/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:16:10 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/22 09:56:36 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int ft_int(long value)
{
	if (value > INT_MAX || value < INT_MIN)
		return (0);
	return (1);
}

int	ft_count_words(char const *s, char c)
{
	int	nbwords;
	int	a;

	a = 0;
	nbwords = 0;
	while (s[a])
	{
		if (s[a] != c
			&& (s[a + 1] == c || s[a + 1] == '\0'))
		{
			nbwords++;
			a++;
		}
		else
			a++;
	}
	return (nbwords);
}

dnode	*ft_parse(int argc, char **argv, dnode *stack)
{
	int		i;

	if (argc == 2)
		stack = ft_parse2(argv[1], stack);
	else if (argc != 2)
	{
		i = argc - 1;
		if (ft_check_digit(argc, argv) && ft_check_dup(argc, argv))
		{
			while (i > 0)
			{
				if (!ft_int(ft_atoi(argv[i])))
				{
					write(2, "Error\n", 6);
					//ft_free_stack une fonction qui free toutes la stack
					exit(EXIT_FAILURE);
				}
				stack = push_node(stack, ft_atoi(argv[i]));
					i--;
			}
		}
		else
			ft_printf("Error\n");
	}
	return (stack);
}

dnode	*ft_parse2(char *argv2, dnode *stack)
{
	int		y;
	char	**tab;

	tab = ft_split(argv2, ' ');
	y = ft_count_words(argv2, ' ');
	if (ft_check_digit2(y, tab) && ft_check_dup2(y, tab))
	{
		y--;
		while (y > -1)
		{
			if (!ft_int(ft_atoi(tab[y])))
			{
				write(2, "Error\n", 6);
				//ft_free_tab une fonction qui free toutes le tab
				//ft free stack
				exit(EXIT_FAILURE);
			}
			stack = push_node(stack, ft_atoi(tab[y]));
			y--;
		}
	}
	else
		ft_printf("Error\n");
	ft_free(&tab, y);
	return (stack);
}
