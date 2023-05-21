# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:31:13 by takuokam          #+#    #+#              #
#    Updated: 2023/05/09 00:01:33 by takumasaoka      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := AnimalProgram
FUNC	:= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -fsanitize=address

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(FUNC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
