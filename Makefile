# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htam <htam@student.42berlin.de>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 16:09:08 by htam              #+#    #+#              #
#    Updated: 2024/02/04 16:55:05 by htam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libunit.a

# Compiler
CC		= @cc
CFLAGS	=  -Wall -Wextra -Werror

# Libft
LIBFT_PATH	= libft/
LIBFT_NAME	= libft.a
LIBFT		= $(LIBFT_PATH)$(LIBFT_NAME)

# Includes
INC			=	-I ./framework/includes/\
				-I libft/

# Sources
SRC_PATH	=	./framework/src/
SRC			=	libunit.c free.c log.c utils.c

SRCS		= $(addprefix $(SRC_PATH), $(SRC))

# Objects
OBJ_PATH	= ./framework/obj/
OBJ			= $(SRC:.c=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

all: $(LIBFT) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(LIBFT):
	@echo "Making libft..."
	@make -sC $(LIBFT_PATH)


$(NAME): $(OBJS)
	@echo "Compiling libunit..."
	cp libft/libft.a $(NAME)
	@ar -rcs $(NAME) $(OBJS)
	@echo "libunit compiled."

bonus: all

test: $(LIBFT) $(NAME)
	$(MAKE) -sC tests/demo
	-./tests/demo/demo
	$(MAKE) fclean -sC tests/demo


clean:
	@echo "Removing .o object files..."
	@rm -rf $(OBJ_PATH)
	@make clean -sC $(LIBFT_PATH)

fclean: clean
	@echo "Removing libunit..."
	@rm -f $(NAME)
	@make fclean -sC $(LIBFT_PATH)
	@make fclean -sC tests/demo

re: fclean all

.PHONY: all re clean fclean