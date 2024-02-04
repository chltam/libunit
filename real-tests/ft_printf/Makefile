# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 15:24:52 by astavrop          #+#    #+#              #
#    Updated: 2024/02/04 15:27:14 by astavrop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -g
NAME			= ft_printf.test

INCLUDES		= -L. -lftprintf -lunit
SRCS			=	00_launcher_ftprintf.c \
					01_ft_printf_test.c \
					02_ft_printf_test.c \
					03_ft_printf_test.c \
					04_ft_printf_test.c \
					05_ft_printf_test.c \
					06_ft_printf_test.c \
					07_ft_printf_test.c \
					08_ft_printf_test.c \
					main.c
OBJS			= $(SRCS:.c=.o)

FT_PRINTF_BIN	= libftprintf.a

LUNIT_PATH		= ../../framework
LUNIT_BIN		= libunit.a

rm				= rm -f

all: $(NAME)

.PHONY: clean fclean re test compile-lunit clean-other


%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

compile-lunit:
	@cd $(LUNIT_PATH) && $(MAKE) -s
	@cp $(LUNIT_PATH)/$(LUNIT_BIN) ./

$(NAME): $(OBJS) compile-lunit
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
	$(RM) $(NAME) $(LUNIT_BIN)

clean-other:
	$(MAKE) -C ../../framework fclean

re: fclean all