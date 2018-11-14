# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 09:58:03 by mkryukov          #+#    #+#              #
#    Updated: 2018/11/08 20:32:39 by mkryukov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = main.c funcs.c
FLAGS = -Wall -Wextra -Werror
OPTS = -o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTS) $(NAME) $(SRCS) 

clean:
	/bin/rm - f $(NAME)
fclean: clean

.PHONY: all clean fclean re
