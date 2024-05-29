# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 15:13:33 by francesco         #+#    #+#              #
#    Updated: 2024/05/29 20:14:18 by ftholoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = Fixed.hpp
NAME = a.out

all : $(NAME)

re :fclean $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ) $(INCLUDES).gch
fclean: clean
	rm -rf $(NAME)