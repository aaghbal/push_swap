# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 17:35:37 by aaghbal           #+#    #+#              #
#    Updated: 2023/03/02 17:35:41 by aaghbal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = push_swap
HEADER = push_swap.h
SRC =instructions.c utils_3.c ft_cre_list.c utils.c check_char.c ft_strcat.c utils_2.c push_swap.c\
		ft_shanks.c ft_shanks_9.c ft_case_5.c ft_case_4.c
OBJ_SRC = $(SRC:.c=.o)


all : libft $(NAME)

libft :
	make -C ./libft

$(NAME) :  $(OBJ_SRC)  $(HEADER)
		$(CC) $(CFLAGS) ./libft/libft.a $(OBJ_SRC) -o $(NAME)

%.o  : %.c $(HEADER) libft.h
	$(CC) $(CFLAGS) -c $<

clean :
	make clean -C ./libft
	$(RM) $(OBJ_SRC)

fclean : clean
	make fclean -C ./libft
	$(RM) $(NAME)

re : fclean all

.PHONY: all fclean clean re libft


