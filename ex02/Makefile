# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 23:55:21 by jacopo            #+#    #+#              #
#    Updated: 2024/04/05 23:55:25 by jacopo           ###   ########.fr        #
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
