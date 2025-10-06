# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joesanto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/16 14:38:33 by joesanto          #+#    #+#              #
#    Updated: 2025/09/16 15:34:06 by joesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = bsq
SRCS = srcs/main.c srcs/bsq_import_map.c
HEADERS = includes/bsq.h

CC = cc
FLAGS = -Wall -Wextra -Werror -g
OBJS = $(SRCS:.c=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	@$(CC) $^ -o $@

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@ -I includes

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(PROGRAM)

norm:
	@norminette -R checkForbiddenSourceHeader .
