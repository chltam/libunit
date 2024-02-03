# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 21:46:01 by astavrop          #+#    #+#              #
#    Updated: 2024/02/03 13:07:07 by astavrop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Wall -Wextra -Werror
NAME			= strlen.test

INCLUDES		= -L. -lft
SRCS			=	00_launcher.c \
					01_basic_test.c \
					02_null_test.c \
					03_bigger_str_test.c \
					04_ko_test.c \
					05_buserror_test.c \
					../main.c
OBJS			= $(SRCS:.c=.o)

LFT_PATH		= ../../Libft
LFT_BIN			= libft.a

rm				= rm -rf

all: $(NAME)

.PHONY: compile-lft clean fclean re

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

compile-lft:
	cd $(LFT_PATH) && $(MAKE) bonus
	cp $(LFT_PATH)/$(LFT_BIN) ./

$(NAME): compile-lft $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LFT_BIN)

re: fclean all