# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 10:18:14 by jacopo            #+#    #+#              #
#    Updated: 2024/10/01 13:02:19 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat02

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp

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
