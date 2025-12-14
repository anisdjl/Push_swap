# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 17:52:03 by adjelili          #+#    #+#              #
#    Updated: 2025/12/11 14:15:48 by adjelili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap.a
SRC = #rien a mettre pour le moment
OBJ = $(SRC:.c=.o)
ARC = ar rcs

all : $(NAME)

$(NAME) : $(OBJ)
	$(ARC) $(NAME) $(OBJ)
	
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean :
	rm -f $(OBJ)
	
fclean : clean
	rm -f $(NAME)
	
re : fclean all

.PHONY : all clean fclean re