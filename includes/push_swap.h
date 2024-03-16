/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 04:00:52 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 12:56:36 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <string.h>

typedef struct s_stack_node
{
	long					number;
	int						index;
	struct s_stack_node		*prev;
	struct s_stack_node		*next;
}				t_stack_node;

// add_dup_sorted.c
t_stack_node	*ft_listlast(t_stack_node *stack);
void			ft_add_back(t_stack_node **stack, t_stack_node *new);
int				ft_checkdup(t_stack_node *a);
int				ft_checksorted(t_stack_node *stack_a);

// algorithm.c
int				ft_atoi2(const char *s);
t_stack_node	*ft_sub_process(char **argv);
t_stack_node	*ft_process(int argc, char **argv);

// apply_rotate.c
int				ft_apply_rarb(t_stack_node **a, t_stack_node **b,
					int n, char s);
int				ft_apply_rrarrb(t_stack_node **a, t_stack_node **b,
					int n, char s);
int				ft_apply_rrarb(t_stack_node **a, t_stack_node **b,
					int n, char s);
int				ft_apply_rarrb(t_stack_node **a, t_stack_node **b,
					int n, char s);

// cases_utils1.c
int				case_rrarrb(t_stack_node *a, t_stack_node *b, int num);
int				case_rarb(t_stack_node *a, t_stack_node *b, int num);
int				case_rrarb(t_stack_node *a, t_stack_node *b, int num);
int				case_rarrb(t_stack_node *a, t_stack_node *b, int num);

// cases_utils2.c
int				case_rarb2(t_stack_node *a, t_stack_node *b, int num);
int				case_rrarrb2(t_stack_node *a, t_stack_node *b, int num);
int				case_rarrb2(t_stack_node *a, t_stack_node *b, int num);
int				case_rrarb2(t_stack_node *a, t_stack_node *b, int num);

// for_error.c
void			ft_error(void);
void			ft_free(t_stack_node **stk);
void			ft_freestr(char **stk);

// ft_sort_all.c
void			ft_sort_b_till_3(t_stack_node **stack_a,
					t_stack_node **stack_b);
t_stack_node	*ft_sort_b(t_stack_node **stack_a);
t_stack_node	**ft_sort_a(t_stack_node **stack_a, t_stack_node **stack_b);
void			ft_sort(t_stack_node **stack_a);

// min_max.c
int				ft_max(t_stack_node *stack);
int				ft_min(t_stack_node *stack);
int				list_size(t_stack_node *stack);
int				find_index(t_stack_node *stack, int nummer);

// mini_helpers.c
int				is_digit(int digit);
t_stack_node	*ft_new_stack_node(int new_val);
void			ft_free_str(char **stack_node);
int				find_place_ina(t_stack_node *a, int n);
int				find_place_inb(t_stack_node *b, int n);

// rotate_type.c
int				ft_rotate_type_ab(t_stack_node *a, t_stack_node *b);
int				ft_rotate_type_ba(t_stack_node *a, t_stack_node *b);

// operations_push.c
void			pa(t_stack_node **a, t_stack_node **b, int isprint);
void			pb(t_stack_node **a, t_stack_node **b, int isprint);

// operations_revrotate.c
void			rra(t_stack_node **a, int isprint);
void			rrb(t_stack_node **b, int isprint);
void			rrr(t_stack_node **a, t_stack_node **b, int isprint);

// operations_rotate.c
void			ra(t_stack_node **a, int isprint);
void			rb(t_stack_node **b, int isprint);
void			rr(t_stack_node **a, t_stack_node **b, int isprint);

// operations_swap.c
void			sa(t_stack_node **a, int isprint);
void			sb(t_stack_node **b, int isprint);
void			ss(t_stack_node **a, t_stack_node **b, int isprint);

#endif

// // cases_apply_utils.c
// int				apply_rarb(t_stack_node **a, t_stack_node **b, int num,
// 					char str);
// int				apply_rrarrb(t_stack_node **a, t_stack_node **b, int num,
// 					char str);
// int				apply_rrarb(t_stack_node **a, t_stack_node **b, int num,
// 					char str);
// int				apply_rarrb(t_stack_node **a, t_stack_node **b, int num,
// 					char str);

// // cases_utils1.c
// int				case_rrarrb(t_stack_node *a, t_stack_node *b, int num);
// int				case_rarb(t_stack_node *a, t_stack_node *b, int num);
// int				case_rrarb(t_stack_node *a, t_stack_node *b, int num);
// int				case_rarrb(t_stack_node *a, t_stack_node *b, int num);

// // cases_utils2.c
// int				case_rarb2(t_stack_node *a, t_stack_node *b, int num);
// int				case_rrarrb2(t_stack_node *a, t_stack_node *b, int num);
// int				case_rarrb2(t_stack_node *a, t_stack_node *b, int num);
// int				case_rrarb2(t_stack_node *a, t_stack_node *b, int num);

// // error_msg.c
// void			error_msg(char *msg);

// // find_index.c
// int				ft_find_index(t_stack_node *a, int num);

// // list_helpers.c
// t_stack_node	*ft_stack_new_node(int num);
// int				ft_max(t_stack_node *list);
// int				ft_min(t_stack_node *list);
// t_stack_node	*list_last(t_stack_node *list);
// int				list_size(t_stack_node *list);

// // list_utils.c
// int				find_index(t_stack_node *lst, int num);
// int				find_place_inb(t_stack_node *b, int push_num);
// int				find_place_ina(t_stack_node *a, int push_num);

// // operations_push.c
// void			pa(t_stack_node **a, t_stack_node **b, int isprint);
// void			pb(t_stack_node **a, t_stack_node **b, int isprint);

// // operations_revrotate.c
// void			rra(t_stack_node **a, int isprint);
// void			rrb(t_stack_node **b, int isprint);
// void			rrr(t_stack_node **a, t_stack_node **b, int isprint);

// // operations_rotate.c
// void			ra(t_stack_node **a, int isprint);
// void			rb(t_stack_node **b, int isprint);
// void			rr(t_stack_node **a, t_stack_node **b, int isprint);

// // operations_swap.c
// void			sa(t_stack_node **a, int isprint);
// void			sb(t_stack_node **b, int isprint);
// void			ss(t_stack_node **a, t_stack_node **b, int isprint);

// // parsing_arguments.c
// int				is_white(char c);
// int				ft_atoi_new(const char *str);
// t_stack_node	*ft_parse_more(char **argv);
// t_stack_node	*ft_parse(int argc, char **argv);

// // rotate_type.c
// int				rotate_type_atob(t_stack_node *a, t_stack_node *b);
// int				rotate_type_btoa(t_stack_node *a, t_stack_node *b);

// // small_helpers.c
// void			ft_add_back(t_stack_node **stk, t_stack_node *new_stk);
// int				repeat_check(t_stack_node *stack);
// int				sorted_stack(t_stack_node *stack);
// void			ft_free(t_stack_node **stack);
// void			ft_free_str(char **str);

// // sort_bigger_args.c
// void			ft_sort_b_till_3(t_stack_node **stack_a, 
// 					t_stack_node **stack_b);
// t_stack_node	*ft_sort_to_b(t_stack_node **stack_a);
// t_stack_node	**ft_sort_to_a(t_stack_node **stack_a, t_stack_node **stack_b);
// void			ft_sort(t_stack_node **stack_a);

// // sort_small_args.c
// void			ft_sort_three(t_stack_node **stack);

// #endif
// // cases_apply_utils.c
// int				apply_rarb(t_stack_node **a, t_stack_node **b, int num,
// 					char str);
// int				apply_rrarrb(t_stack_node **a, t_stack_node **b, int num,
// 					char str);
// int				apply_rrarb(t_stack_node **a, t_stack_node **b, int num,
// 					char str);
// int				apply_rarrb(t_stack_node **a, t_stack_node **b, int num,
// 					char str);

// // cases_utils1.c
// int				case_rrarrb(t_stack_node *a, t_stack_node *b, int num);
// int				case_rarb(t_stack_node *a, t_stack_node *b, int num);
// int				case_rrarb(t_stack_node *a, t_stack_node *b, int num);
// int				case_rarrb(t_stack_node *a, t_stack_node *b, int num);

// // cases_utils2.c
// int				case_rarb2(t_stack_node *a, t_stack_node *b, int num);
// int				case_rrarrb2(t_stack_node *a, t_stack_node *b, int num);
// int				case_rarrb2(t_stack_node *a, t_stack_node *b, int num);
// int				case_rrarb2(t_stack_node *a, t_stack_node *b, int num);

// // error_checks.c
// void			error_msg(char *msg);
// void			ft_free(t_stack_node **stack);
// void			free_str(char **lst);

// // list_utils.c
// t_stack_node	*lstlast(t_stack_node *lst);
// int				lstsize(t_stack_node *lst);
// int				ft_min(t_stack_node *lst);
// int				ft_max(t_stack_node *lst);

// // list_utils2.c
// int				find_index(t_stack_node *lst, int num);
// int				find_place_inb(t_stack_node *b, int push_num);
// int				find_place_ina(t_stack_node *a, int push_num);

// // operations_push.c
// void			pa(t_stack_node **a, t_stack_node **b, int isprint);
// void			pb(t_stack_node **a, t_stack_node **b, int isprint);

// // operations_revrotate.c
// void			rra(t_stack_node **a, int isprint);
// void			rrb(t_stack_node **b, int isprint);
// void			rrr(t_stack_node **a, t_stack_node **b, int isprint);

// // operations_rotate.c
// void			ra(t_stack_node **a, int isprint);
// void			rb(t_stack_node **b, int isprint);
// void			rr(t_stack_node **a, t_stack_node **b, int isprint);

// // operations_swap.c
// void			sa(t_stack_node **a, int isprint);
// void			sb(t_stack_node **b, int isprint);
// void			ss(t_stack_node **a, t_stack_node **b, int isprint);

// // rotate_type.c
// int				rotatee_atob(t_stack_node *a, t_stack_node *b);
// int				rotate_type_btoa(t_stack_node *a, t_stack_node *b);
// int				rotate_type_atob(t_stack_node *a, t_stack_node *b);

// // sort_stacks.c
// t_stack_node	**push_to_a(t_stack_node **a, t_stack_node **b);
// void			pb_till_ais3(t_stack_node **a, t_stack_node **b);
// t_stack_node	*push_to_b(t_stack_node **a);
// void			ft_sort(t_stack_node **a);

// // stack_algo.c
// int				ft_iswhite(char c);
// int				ft_atol(const char *str);
// t_stack_node	*sub_stack_init(char **argv);
// t_stack_node	*stack_init(int argc, char **argv);

// // stack_checks.c
// int				repeat_check(t_stack_node *lst);
// int				sorted_stack(t_stack_node *lst);

// // stack_utils.c
// void			add_back(t_stack_node **lst, t_stack_node *new);
// t_stack_node	*new_node(int num);
// #endif