/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:57:05 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/15 17:47:36 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
\
int	ft_check(char *string)
{
	int y;
	
	y = 0;
	while (string[y])
	{
		if (!ft_isdigit(string[y]))
			return (0);
		y++;
	}
	return (1);
}

int	ft_check_dup(int argc, char **argv)
{
	int	y;
	int	a;

	y = 0;
	while (y < argc)
	{
		a = y + 1;
		while (a < argc)
		{
			if (atoi(argv[y]) == atoi(argv[a]))
				return (0);
			a++;
		}
		y++;
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}