# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takuokam <takuokam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:31:13 by takuokam          #+#    #+#              #
#    Updated: 2023/10/10 20:16:10 by takuokam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := AnimalProgram
FUNC	:= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98 -pedantic-errors

all: $(NAME)

$(NAME): $(FUNC)
	$(CC) $(FLAGS) $(FUNC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
