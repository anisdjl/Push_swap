/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:57:05 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/31 10:45:43 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_check_digit(int argc, char **argv)
{
	int	a;
	int	y;

	y = 1;
	while (y < argc)
	{
		a = 0;
		if ((argv[y][0] == '-' || argv[y][0] == '+')
			&& (ft_isdigit(argv[y][1])))
			a++;
		while (argv[y][a])
		{
			if (ft_isdigit(argv[y][a]))
				a++;
			else
				return (0);
		}
		y++;
	}
	return (1);
}

int	ft_check_dup(int argc, char **argv)
{
	int	y;
	int	a;

	y = 1;
	while (y < argc)
	{
		a = y + 1;
		while (a < argc)
		{
			if (ft_atoi(argv[y]) == ft_atoi(argv[a]))
				return (0);
			a++;
		}
		y++;
	}
	return (1);
}

int	ft_check_digit2(int words, char **tab)
{	
	int	a;
	int	y;

	y = 0;
	while (y < words)
	{
		a = 0;
		if ((tab[y][0] == '-' || tab[y][0] == '+') && (ft_isdigit(tab[y][1])))
			a++;
		while (tab[y][a])
		{
			if (ft_isdigit(tab[y][a]))
				a++;
			else
				return (0);
		}
		y++;
	}
	return (1);
}

int	ft_check_dup2(int words, char **argv)
{
	int	y;
	int	a;

	y = 0;
	while (y < words)
	{
		a = y + 1;
		while (a < words)
		{
			if (ft_atoi(argv[y]) == ft_atoi(argv[a]))
				return (0);
			a++;
		}
		y++;
	}
	return (1);
}
