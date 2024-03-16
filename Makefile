# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 07:37:42 by sprodatu          #+#    #+#              #
#    Updated: 2024/03/16 08:24:50 by sprodatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Include directory
INCLUDES = -I./includes -I./libft

# Name of your project
PROJ_NAME = push_swap

# Source files
SRCS =	srcs/main_part/push_swap.c \
		srcs/main_part/add_dup_sorted.c \
		srcs/main_part/algorithm.c \
		srcs/main_part/apply_rotate.c \
		srcs/main_part/cases_utils1.c \
		srcs/main_part/cases_utils2.c \
		srcs/main_part/for_error.c \
		srcs/main_part/ft_sort_all.c \
		srcs/main_part/min_max.c \
		srcs/main_part/mini_helpers.c \
		srcs/main_part/rotate_type.c \
		srcs/main_part/operations_push.c \
		srcs/main_part/operations_swap.c \
		srcs/main_part/operations_rotate.c \
		srcs/main_part/operations_revrotate.c \

# Bonus source files
BONUS_SRCS = 

# Object files
OBJS = $(SRCS:.c=.o)

# Bonus object files
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Default target
all: lib $(PROJ_NAME)

$(PROJ_NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -L./libft -lft -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus: lib $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -L./libft -lft -o $(PROJ_NAME)_bonus $^

lib:
	make -C libft

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	make clean -C libft

fclean: clean
	rm -f $(PROJ_NAME) $(PROJ_NAME)_bonus
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re bonus lib