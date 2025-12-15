/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:34:31 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/15 17:37:05 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

// typedef struct s_list
// {
// 	int				content;
// 	struct s_list	*next;
// }	node;

int	ft_print_int(int n);
int	ft_test_format(char c, va_list *args);
int	ft_printf(const char *s, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_uint(unsigned int n);
int	ft_print_hex(unsigned int n, char c);
int	ft_print_ptr(void *p);
int	ft_check(char *string);
int	main(int arg, char **argv);
int	ft_atoi(char *nptr);
int	ft_isdigit(int c);
int	ft_check_dup(int argc, char **argv);

#endif