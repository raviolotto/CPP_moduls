# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacopo <jcardina@student.42roma.it>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 10:18:14 by jacopo            #+#    #+#              #
#    Updated: 2024/05/31 10:28:37 by jacopo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp

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
