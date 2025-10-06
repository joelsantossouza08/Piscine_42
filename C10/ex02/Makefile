# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 08:03:44 by joesanto          #+#    #+#              #
#    Updated: 2025/09/11 13:47:14 by joesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
FLAGS=-Wall -Wextra -Werror
SRCS=srcs/ft_tail.c srcs/ft_tail_utils.c srcs/main.c srcs/put.c srcs/str.c
OBJS=$(SRCS:.c=.o)
PROG_NAME=ft_tail

all: $(PROG_NAME)

$(PROG_NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c includes/ft_tail.h
	$(CC) $(FLAGS) -c $< -o $@ -I includes

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(PROG_NAME)
