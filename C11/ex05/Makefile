# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 10:59:43 by joesanto          #+#    #+#              #
#    Updated: 2025/09/06 07:57:15 by joesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
FLAGS=-Wall -Wextra -Werror -g
SRCS=srcs/main.c srcs/do_op.c srcs/do_op_utils.c srcs/utils.c
OBJS=$(SRCS:.c=.o)
PROG_NAME=do-op

all: $(PROG_NAME)

$(PROG_NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c includes/do_op.h
	$(CC) $(FLAGS) -c $< -o $@ -I includes

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(PROG_NAME)
