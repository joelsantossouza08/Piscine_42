# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 17:48:42 by joesanto          #+#    #+#              #
#    Updated: 2025/09/09 14:36:34 by joesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
FLAGS=-Wall -Wextra -Werror
SRCS=srcs/ft_fputstr.c srcs/ft_display_file.c srcs/main.c
OBJS=$(SRCS:.c=.o)
PROG_NAME=ft_display_file

all: $(PROG_NAME)

$(PROG_NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c includes/ft_display_file.h
	$(CC) $(FLAGS) -c $< -o $@ -I includes

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(PROG_NAME)
