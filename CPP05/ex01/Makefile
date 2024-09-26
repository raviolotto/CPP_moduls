# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 10:18:14 by jacopo            #+#    #+#              #
#    Updated: 2024/09/26 14:19:56 by jacopo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat01

SRC = main.cpp Bureaucrat.cpp Form.cpp

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
