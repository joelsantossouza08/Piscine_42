# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 16:27:42 by joesanto          #+#    #+#              #
#    Updated: 2025/09/03 14:34:10 by joesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
FLAGS=-Wall -Wextra -Werror
SRCS=srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS=$(SRCS:.c=.o)

all: libft.a

libft.a: $(OBJS)

%.o: %.c includes/ft.h
	$(CC) $(FLAGS) -c $< -o $@ -I includes	
	ar rcs libft.a $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all
