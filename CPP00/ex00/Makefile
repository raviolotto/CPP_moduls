# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 13:21:43 by jcardina          #+#    #+#              #
#    Updated: 2024/04/02 13:27:51 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

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


