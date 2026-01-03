# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 17:52:03 by adjelili          #+#    #+#              #
#    Updated: 2026/01/03 17:19:12 by adjelili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = execute.c \
       final_rotate_a.c \
	   ft_atoi_ps.c \
	   ft_check.c \
	   ft_free_stack.c \
	   ft_lst.c \
	   ft_split.c \
	   main.c \
	   optimisation.c \
	   parsing.c \
	   push_swap.c \
	   push.c \
	   reverse_rotate.c \
	   rotate.c \
	   send_to_a.c \
	   send_to_b.c \
	   swap.c \
	   verif.c
OBJ = $(SRCS:.c=.o)
	
PRINTF_DIR = printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a

all : $(PRINTF_LIB) $(NAME)

$(PRINTF_LIB) :
	$(MAKE) -C $(PRINTF_DIR)
	
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF_LIB) -I$(PRINTF_DIR) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)
	$(MAKE) -C $(PRINTF_DIR) clean
	
fclean : clean
	rm -f $(NAME)
	$(MAKE) -C $(PRINTF_DIR) fclean
	
re : fclean all

.PHONY : all clean fclean re