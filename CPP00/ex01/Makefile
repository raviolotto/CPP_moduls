# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 13:21:43 by jcardina          #+#    #+#              #
#    Updated: 2024/04/05 20:56:54 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = Contact.cpp main.cpp PhoneBook.cpp

HEADERS = Contact.hpp PhoneBook.hpp

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


