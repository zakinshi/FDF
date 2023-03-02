# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 21:31:54 by zbouhami          #+#    #+#              #
#    Updated: 2022/11/13 15:42:34 by zbouhami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc

FIL_C = ft_atoi.c		ft_isprint.c	ft_memchr.c		ft_putnbr_fd.c	ft_strlcat.c	ft_substr.c\
		ft_bzero.c		ft_itoa.c		ft_memcmp.c		ft_putstr_fd.c	ft_strlen.c		ft_tolower.c\
		ft_calloc.c		ft_memcpy.c		ft_split.c		ft_strmapi.c	ft_memset.c		ft_toupper.c\
		ft_isalnum.c	ft_memmove.c	ft_strchr.c		ft_strncmp.c	ft_isalpha.c	ft_strdup.c\
		ft_isascii.c	ft_putchar_fd.c	ft_striteri.c	ft_strrchr.c	ft_isdigit.c	ft_strtrim.c\
		ft_strnstr.c	ft_putendl_fd.c	ft_strjoin.c	ft_strlcpy.c
		
FIL_OBJ = $(FIL_C:.c=.o)

#____BONUS_____PART_____#

FIL_C_BNS = ft_lstadd_front.c	ft_lstadd_back.c	ft_lstlast.c	ft_lstnew.c		ft_lstsize.c

FIL_OBJ_BNS = $(FIL_C_BNS:.c=.o)
#_____________________#
all : $(NAME)
	@echo "$(GREEN)==> ***Compiling FILES '.c' SUCCESSED <3***\n$(DEF_COLOR)"
	
$(NAME) : $(FIL_OBJ)
	$(AR) $@ $^
	@echo "\n$(GREEN)--> Libft Library created!\n$(DEF_COLOR)"

%.o : %.c libft.h 
	$(CC) $(CFLAGS) -c $<

bonus : $(FIL_OBJ_BNS)
	$(AR) $(NAME) $^

clean :
	$(RM) $(FIL_OBJ) $(FIL_OBJ_BNS)
	@echo "$(RED) ___All OBJECT FILES Deleted____\n$(DEF_COLOR)"

fclean : clean
	$(RM) $(NAME)
	@echo "$(RED) ___$(NAME) Deleted___$(DEF_COLOR)"

re : fclean all

RED = \x1b[31m
GREEN =\033[0;92m
DEF_COLOR =\033[0;39m