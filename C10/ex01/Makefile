# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 08:03:44 by joesanto          #+#    #+#              #
#    Updated: 2025/09/11 07:43:51 by joesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
FLAGS=-Wall -Wextra -Werror
SRCS=srcs/utils.c srcs/ft_cat.c srcs/main.c
OBJS=$(SRCS:.c=.o)
PROG_NAME=ft_cat

all: $(PROG_NAME)

$(PROG_NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c includes/ft_cat.h
	$(CC) $(FLAGS) -c $< -o $@ -I includes

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(PROG_NAME)
