# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 14:26:03 by pamartin          #+#    #+#              #
#    Updated: 2023/08/30 14:26:07 by pamartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)


CC = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra -fsanitize=address

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "My Replace programm is ready :)\n"

all:	$(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.phony: all clean fclean re
