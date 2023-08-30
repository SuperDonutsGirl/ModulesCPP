# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 16:02:10 by pamartin          #+#    #+#              #
#    Updated: 2023/08/29 16:02:13 by pamartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ_2

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)


CC = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra -fsanitize=address

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "BraiiiiiiinnnzzzZ 2 is ready :)\n"

all:	$(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.phony: all clean fclean re

