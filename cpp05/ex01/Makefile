# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takuokam <takuokam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:31:13 by takuokam          #+#    #+#              #
#    Updated: 2023/10/14 16:26:44 by takuokam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := FormProgram
FUNC	:= main.cpp Bureaucrat.cpp Form.cpp 
CXX		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98 -pedantic-errors

all: $(NAME)

$(NAME): $(FUNC)
	$(CXX) $(CXXFLAGS) $(FUNC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
