# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 17:25:47 by pamartin          #+#    #+#              #
#    Updated: 2023/02/24 17:25:50 by pamartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

SRC = main.cpp Serializer.cpp
OBJ = $(SRC:.cpp=.o)


CC = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra -fsanitize=address -g

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "Serialization is ready :)\n"

all:	$(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.phony: all clean fclean re



