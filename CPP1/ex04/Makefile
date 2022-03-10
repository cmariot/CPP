# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 11:15:47 by cmariot           #+#    #+#              #
#    Updated: 2022/03/10 10:14:41 by cmariot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# **************************************************************************** #
#                          PROJECT'S DIRECTORIES                               #
# **************************************************************************** #

NAME			= sed_is_for_losers 


# **************************************************************************** #
#                         COMPILATION AND LINK FLAGS                           #
# **************************************************************************** #

CC				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98

LFLAGS			= -Wall -Wextra -Werror -std=c++98


# **************************************************************************** #
#                                SOURCE FILES                                  #
# **************************************************************************** #


SRCS		= main.cpp \
			  File.cpp

OBJ			:= $(SRCS:.cpp=.o)


# **************************************************************************** #
#                                  COLORS                                      #
# **************************************************************************** #


GREEN		= \033[32;1m
RED			= \033[31;1m
YELLOW		= \033[33;1m
CYAN		= \033[36;1m
RESET		= \033[0m


# **************************************************************************** #
#                             MAKEFILE'S RULES                                 #
# **************************************************************************** #

.SILENT : all

all : header $(NAME) footer

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	: $(OBJ)
		$(CC) $(LFLAGS) $(OBJ) -o $(NAME)

leaks :	all
		valgrind --leak-check=full --show-leak-kinds=all --track-fds=yes --track-origins=yes ./megaphone

install: re
		cp $(NAME) ~/bin

clean :
		@-rm -f $(OBJ)
		@printf "$(RED)"
		@printf "Object files removed\n"
		@printf "$(RESET)"

fclean :
		@-rm -f $(NAME)
		@-rm -f $(OBJ)
		@printf "$(RED)"
		@printf "Binary and object files removed\n"
		@printf "$(RESET)"

re :	fclean all

.PHONY : fclean

header:
		@printf "$(CYAN)"
		@printf "CPP module01 ex04 :\n"
		@printf "$(RESET)"

footer: 
		@printf "$(CYAN)"
		@printf "Usage:\n"
		@printf "$(RESET)"
		@printf "./" 
		@printf $(NAME)
		@printf "\n"
