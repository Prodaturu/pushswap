# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 06:50:31 by sprodatu          #+#    #+#              #
#    Updated: 2024/02/08 12:34:32 by sprodatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Library Name
NAME = push_swap

PRINTF_SRCS = append_node.c find_smallest_node.c find_last.c finish_rotation.c \
	free_error.c free_matrix.c free_stack.c ft_memcpy.c ft_putstr_fd.c ft_split.c init_nodes.c \
	main.c mini_sort.c move_nodes.c pa.c pb.c push_swap.c ra.c rb.c repeat_err.c return_cheapest.c \
	rev_rotate_both.c rotate_both.c rotate.c rr.c rra.c rrb.c rrr.c set_cheapest.c \
	set_cur_pos.c set_price.c find_target_node.c set_target_node.c stack_init.c \
	stack_length.c syntax_error.c ft_memcpy.c sorted_stack.c main.c 


OBJS = $(PRINTF_SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Complete list of Rules
# Rule to make the library
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "\033[0;32mcompiled succesfully\033[0m"

bonus:$(NAME)
	@echo "\033[0;32mbonus compiled succesfully\033[0m"

clean:
	rm -f $(OBJS)

# Rule to clean everything
fclean: clean
	rm -f $(NAME)

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re