# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/06 14:45:48 by jcardina          #+#    #+#              #
#    Updated: 2024/04/12 10:10:12 by jacopo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap01

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	c++ -c $(CPPFLAGS) $< -o $@

all: $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
