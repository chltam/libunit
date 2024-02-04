# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 21:46:01 by astavrop          #+#    #+#              #
#    Updated: 2024/02/04 13:54:12 by astavrop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -g
NAME			= atoi.test

INCLUDES		= -L. -lft -lunit
SRCS			=	00_launcher_atoi.c \
					01_atoi_test.c \
					02_atoi_test.c \
					03_atoi_test.c \
					04_atoi_test.c \
					05_atoi_test.c \
					06_atoi_test.c \
					07_atoi_test.c \
					08_atoi_test.c \
					09_atoi_test.c \
					10_atoi_test.c \
					11_atoi_test.c \
					12_atoi_test.c \
					13_atoi_test.c \
					14_atoi_test.c \
					15_atoi_test.c \
					main.c
OBJS			= $(SRCS:.c=.o)

LFT_PATH		= ../../libft
LFT_BIN			= libft.a

LUNIT_PATH		= ../../framework
LUNIT_BIN		= libunit.a

rm				= rm -f

all: $(NAME)

.PHONY: compile-lft clean fclean re test compile-lunit clean-other


%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

compile-lft:
	@cd $(LFT_PATH) && $(MAKE) -s
	@cp $(LFT_PATH)/$(LFT_BIN) ./

compile-lunit:
	@cd $(LUNIT_PATH) && $(MAKE) -s
	@cp $(LUNIT_PATH)/$(LUNIT_BIN) ./

$(NAME): $(OBJS) compile-lft compile-lunit
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

test: $(NAME)
	@echo "\n\n\033[34;3m*** Run tests ***\033[0m"
	-./$(NAME)
	@echo "\033[34;3m*** Clean everything ***\033[0m\n\n"
	$(MAKE) -s fclean
	$(MAKE) -s clean-other

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LFT_BIN) $(LUNIT_BIN)

clean-other:
	$(MAKE) -C ../../libft fclean
	$(MAKE) -C ../../framework fclean

re: fclean all