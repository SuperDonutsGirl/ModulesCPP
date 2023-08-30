# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 13:56:04 by pamartin          #+#    #+#              #
#    Updated: 2023/08/30 13:56:05 by pamartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)


CC = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra -fsanitize=address

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "human with weapon is ready :)\n"

all:	$(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.phony: all clean fclean re

