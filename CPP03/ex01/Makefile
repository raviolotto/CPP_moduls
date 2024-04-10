# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/06 14:45:48 by jcardina          #+#    #+#              #
#    Updated: 2024/04/10 18:59:13 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap01

SRC = main.cpp ClapTrap.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

OBJ = $(SRC:%.cpp=%.o)

all: $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
