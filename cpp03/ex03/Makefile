# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:31:13 by takuokam          #+#    #+#              #
#    Updated: 2023/05/03 09:57:42 by takumasaoka      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := FragTrapProgram
FUNC	:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98 -pedantic-errors

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(FUNC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
