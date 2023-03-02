# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 20:26:10 by zbouhami          #+#    #+#              #
#    Updated: 2023/02/12 21:02:30 by zbouhami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= main
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
PATH	=get_next_line/

SRC1 = get_next_line/get_next_line.c get_next_line/get_next_line_utils.c
SRC2 = main.c
OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -c $(SRC2) $(SRC1) -o $@

$(NAME) :
	$(CC) $(FLAGS) $(SRC2) $(SRC1) -o $(NAME)

clean :
	@rm -rf $(OBJ1) $(OBJ2) $(NAME)
	
re : clean $(NAME)