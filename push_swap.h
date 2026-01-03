/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:34:31 by adjelili          #+#    #+#             */
/*   Updated: 2026/01/03 15:31:05 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
# include "printf/ft_printf.h"

typedef struct dnode
{
	struct dnode	*next;
	int				value;
	struct dnode	*prev;
}	t_dnode;

typedef struct bpos
{
	int	cost_a;
	int	cost_b;
	int	pos;
	int	best_cost;
}	t_best_pos;

// =================== parsing =========================== //

int			ft_check_digit(int argc, char **argv);
int			only_spaces(char **argv);
int			ft_check_dup(int argc, char **argv);
t_dnode		*ft_parse(int argc, char **argv, t_dnode *stack);
t_dnode		*push_node(t_dnode *stack, int value);
t_dnode		*ft_parse2(char *argv2, t_dnode *stack);
int			ft_count_words(char const *s, char c);
int			ft_check_digit2(int words, char **tab);
int			ft_check_dup2(int words, char **argv);
char		**ft_free(char ***tab, int x);
int			ft_int(long value);

// =================== libft ============================= //

int			ft_isdigit(int c);
long		ft_atoi(char *nptr);
char		**ft_split(char const *s, char c);
int			ft_lstsize(t_dnode *lst);
void		ft_lstadd_back(t_dnode **stack, t_dnode *new);
void		ft_lstadd_front(t_dnode **stack, t_dnode *new);

// ==================== operations ======================== //

void		sa(t_dnode *stack_a);
void		sb(t_dnode *stack_b);
void		ss(t_dnode *stack_a, t_dnode *stack_b);
void		pa(t_dnode **stack_a, t_dnode **stack_b);
void		pb(t_dnode **stack_b, t_dnode **stack_a);
void		ra(t_dnode **stack_a);
void		rb(t_dnode **stack_b);
void		rr(t_dnode **stack_a, t_dnode **stack_b);
void		rra(t_dnode **stack_a);
void		rrb(t_dnode **stack_b);
void		rrr(t_dnode **stack_a, t_dnode **stack_b);
void		ft_free_stack(t_dnode **stack);

// =================== calculs =========================== //

t_best_pos	ft_find_best_cost(t_dnode *stack_a, t_dnode *stack_b);
int			ft_cost_a(t_dnode *stack, int pos);
int			ft_cost_b(t_dnode *stack_b, int value);
int			is_positive(int value);
int			ft_opti(int cost_a, int cost_b);
int			ft_opti2(int cost_a, int cost_b);
int			value_max(t_dnode *stack_b);
int			find_max(t_dnode *stack_b, int value);
int			is_max(t_dnode *stack_a, int value);
int			min_pos(t_dnode *stack_a);
void		update_best(t_best_pos *best, int cost_a, int cost_b, int pos);
int			find_pos(t_dnode *stack, int value);

// =================== execution ======================== //

int			main(int arg, char **argv);
void		push_swap(t_dnode **stack_a, t_dnode **stack_b);
void		ft_execute_postive(t_dnode **stack_a,
				t_dnode **stack_b, t_best_pos best);
void		ft_execute_positive2(t_dnode **stack_b, t_best_pos best);
void		ft_execute_negative(t_dnode **stack_a,
				t_dnode **stack_b, t_best_pos best);
void		ft_execute_negative2(t_dnode **stack_b, t_best_pos best);
void		ft_execute_else(t_dnode **stack_a, t_dnode **stack_b,
				t_best_pos best);
void		ft_execute_else2(t_dnode **stack_a, t_dnode **stack_b,
				t_best_pos best);
void		push_to_b(t_dnode **stack_a, t_dnode **stack_b);
void		ft_execute_best_pos(t_dnode **stack_a,
				t_dnode **stack_b, t_best_pos best);
void		final_rotate(t_dnode **stack_b, int pos);
void		ft_sort_the_3(t_dnode **stack_a);
void		ft_sort_the_3_2(t_dnode **stack_a);
void		ft_sort_the_2(t_dnode **stack_a);
void		push_to_a(t_dnode **stack_a, t_dnode **stack_b);
int			find_the_target(t_dnode *stack_a, int value);
void		ft_final_pushes(t_dnode **stack_a, t_dnode **stack_b, int pos);
void		final_rotate_a(t_dnode **stack_a);
int			sorted(t_dnode *stack_a);
void		write_error(t_dnode **stack);

#endif