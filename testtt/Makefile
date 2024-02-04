# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htam <htam@student.42berlin.de>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 15:23:49 by htam              #+#    #+#              #
#    Updated: 2024/02/04 15:30:28 by htam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := demo

CC := @cc
CFLAGS = -Wall -Werror -Wextra

LIB := -L ../framework -lunit 
LIBUNIT := ../framework/libunit.a

SRCS := main.c 00_launcher.c 01_test_ok.c \
				02_test_ko.c 03_test_sigsegv.c 04_test_sigbus.c \
				05_test_sigabrt.c 06_test_sigfpe.c 07_test_sigpipe.c \
				08_test_sigill.c 09_test_timeout.c \

OBJS := $(SRCS:.c=.o)

all: 