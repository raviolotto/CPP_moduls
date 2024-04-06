# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 23:55:21 by jacopo            #+#    #+#              #
#    Updated: 2024/04/06 12:45:14 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

SRC = Account.cpp tests.cpp

HEADERS = Account.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

OBJ = $(SRC:%.cpp=%.o)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
