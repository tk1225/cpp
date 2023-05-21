# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:31:13 by takuokam          #+#    #+#              #
#    Updated: 2023/05/10 09:46:39 by takumasaoka      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := replace
FUNC	:= main.cpp
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
