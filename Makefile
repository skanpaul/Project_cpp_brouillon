# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ski <ski@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 09:44:43 by ski               #+#    #+#              #
#    Updated: 2022/06/22 10:39:32 by ski              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
# **************************************************************************** #
# Compilateur du mac
# CC		= g++

# Compilateur (choisi intelligemment): 
# --> il faut faire au prealable [ export CXX=g++-11 ] dans [.zshrc]
# CXX		+= g++

# Compilateur de .brew
CC		= g++-11

CFLAG	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRC		= 	Main.cpp \
			class.Iphone.cpp

OBJ		= $(SRC:.cpp=.o)

RM		= rm -f

# **************************************************************************** #
all: $(NAME)

# **************************************************************************** #
%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

# $@ : produit (ou but) de la règle
# $< : nom de la première dépendance (ou source)
# $? : toutes les dépendances plus récentes que le but
# $^ : toutes les dépendances
# $+ :	idem mais chaque dépendance apparait autant de fois qu'elle est cité 
# 		et l'ordre d'apparition est conservé.
# **************************************************************************** #

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $^ -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

r:
	@./$(NAME)
	
# **************************************************************************** #