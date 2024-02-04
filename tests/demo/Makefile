# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htam <htam@student.42berlin.de>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 21:46:01 by astavrop          #+#    #+#              #
#    Updated: 2024/02/04 16:07:24 by htam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -g
NAME			= demo

INCLUDES		= -L. -lft -lunit
SRCS			=	main.c 00_launcher.c 01_test_ok.c \
						02_test_ko.c 03_test_sigsegv.c 04_test_sigbus.c \
						05_test_sigabrt.c 06_test_sigfpe.c 07_test_sigpipe.c \
						08_test_sigill.c 09_test_timeout.c
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