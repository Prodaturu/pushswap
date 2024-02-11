# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 06:50:31 by sprodatu          #+#    #+#              #
#    Updated: 2024/02/11 15:15:59 by sprodatu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libpush_swap.a
EXE = push_swap

PUSHSWAP_SRCS = append_node.c find_smallest_node.c find_last.c finish_rotation.c \
    free_error.c free_matrix.c free_stack.c ft_memcpy.c ft_putstr_fd.c ft_split.c init_nodes.c \
    mini_sort.c move_nodes.c pa.c pb.c push.c push_swap.c ra.c rb.c repeat_err.c cheapest.c \
    rev_rotate_both.c rotate_both.c rotate.c rr.c rra.c rrb.c rrr.c set_cheapest.c \
    set_cur_pos.c set_price.c set_target_node.c stack_init.c \
    stack_length.c syntax_error.c ft_memcpy.c sorted_stack.c ft_swap.c syntax_error.c \
    handle_five.c sa.c find_highest_node.c find_target_node.c \

MAIN_SRC = main.c

OBJS = $(PUSHSWAP_SRCS:.c=.o)
MAIN_OBJ = $(MAIN_SRC:.c=.o)

# Complete list of Rules
# Rule to make the library
all: $(NAME) $(EXE)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[0;32mcompiled library succesfully\033[0m"

$(EXE): $(MAIN_OBJ) $(NAME)
	@$(CC) $(CFLAGS) -o $(EXE) $(MAIN_OBJ) -L. -lpush_swap
	@echo "\033[0;32mcompiled push_swap succesfully\033[0m"

clean:
	@rm -f $(OBJS) $(MAIN_OBJ)

# Rule to clean everything
fclean: clean
	@rm -f $(NAME) $(EXE)

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re
