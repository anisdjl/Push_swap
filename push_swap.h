/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:34:31 by adjelili          #+#    #+#             */
/*   Updated: 2025/12/22 11:14:03 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

typedef struct	dnode
{
	struct	dnode *next;
	int		value;
	struct	dnode *prev;
}	dnode;

int			ft_print_int(int n);
int			ft_test_format(char c, va_list *args);
int			ft_printf(const char *s, ...);
int			ft_print_char(char c);
int			ft_print_str(char *str);
int			ft_print_uint(unsigned int n);
int			ft_print_hex(unsigned int n, char c);
int			ft_print_ptr(void *p);
int			ft_check_digit(int argc, char **argv);
int			main(int arg, char **argv);
long		ft_atoi(char *nptr);
int			ft_isdigit(int c);
int			ft_check_dup(int argc, char **argv);
dnode		*ft_parse(int argc, char **argv, dnode *stack);
dnode		*push_node(dnode *stack, int value);
char		**ft_split(char const *s, char c);
dnode		*ft_parse2(char *argv2, dnode *stack);
int			ft_count_words(char const *s, char c);
int			ft_check_digit2(int words, char **tab);
int			ft_check_dup2(int words, char **argv);
char		**ft_free(char ***tab, int x);
int			ft_int(long value);
dnode		*sa(dnode *stack_a);
int			ft_lstsize(dnode *lst);
dnode		*sb(dnode *stack_b);
void		ss(dnode *stack_a, dnode *stack_b);
dnode		*pa(dnode *stack_a, dnode *stack_b);

#endif