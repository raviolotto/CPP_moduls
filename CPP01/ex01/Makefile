# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/06 14:45:48 by jcardina          #+#    #+#              #
#    Updated: 2024/04/06 16:25:18 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiez

SRC = main.cpp Zombie.cpp zombieHorde.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

OBJ = $(SRC:%.cpp=%.o)

all: $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
