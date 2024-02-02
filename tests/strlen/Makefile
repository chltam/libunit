# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 21:46:01 by astavrop          #+#    #+#              #
#    Updated: 2024/02/02 21:50:00 by astavrop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Wall -Wextra -Werror
NAME			= strlen.test

SRCS			=	00_launcher.c \
					01_basic_test.c \
					02_null_test.c \
					03_bigger_str_test.c \
					04_ko_test.c
OBJS			= $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)