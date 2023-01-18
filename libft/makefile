# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 14:35:16 by gtegano           #+#    #+#              #
#    Updated: 2023/01/18 14:35:25 by gtegano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I. -c

SRC = src
OBJ = obj

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
