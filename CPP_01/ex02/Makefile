# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 16:22:08 by pamartin          #+#    #+#              #
#    Updated: 2023/08/29 16:22:10 by pamartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)


CC = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra -fsanitize=address

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "hi this is brain is ready :)\n"

all:	$(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.phony: all clean fclean re


