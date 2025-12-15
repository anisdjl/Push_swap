/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:39:01 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/15 12:09:27 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_printf(const char *format, ...)
{
	int		y;
	int		count;
	va_list	args;

	va_start(args, format);
	if (!format)
		return (-1);
	y = 0;
	count = 0;
	while (format[y])
	{
		if (format[y] == '%')
		{
			y++;
			count += ft_test_format(format[y], &args);
		}
		else
		{
			write(1, &format[y], 1);
			count += 1;
		}
		y++;
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>
// int main(void)
// {	
// 	int a = 0xf;
// 	ft_printf("%d", a);
// 	return (0);
// }