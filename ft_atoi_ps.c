/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:09:28 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/31 10:45:00 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *nptr)
{
	int		y;
	int		sign;
	long	total;

	total = 0;
	sign = 1;
	y = 0;
	while ((nptr[y] >= 9 && nptr[y] <= 13) || nptr[y] == 32)
		y++;
	if (nptr[y] == '-')
	{
		sign = -sign;
		y++;
	}
	else if (nptr[y] == '+')
		y++;
	while (nptr[y] >= '0' && nptr[y] <= '9')
	{
		total = total * 10 + nptr[y] - '0';
		y++;
	}
	return (total * sign);
}
