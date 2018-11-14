# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 09:58:03 by mkryukov          #+#    #+#              #
#    Updated: 2018/11/06 23:12:16 by mkryukov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
PATH_SRC	= ./srcs/
HEADER		= ./includes/
OPTIONS		= -c -I $(HEADER)
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJECTS = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(addprefix $(PATH_SRC), $(SRC))
	ar rc $(NAME) $(subst .c,.o, $(SRC))
	ranlib $(NAME)

clean:
	/bin/rm -f $(subst .c,.o, $(SRC))

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
