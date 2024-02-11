#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack_node
{
	int						val;
	int						cur_pos;
	int						fin_index;
	int						push_price;
	bool					above_mid;
	bool					cheapest;
	struct s_stack_node		*target_node;
	struct s_stack_node		*prev;
	struct s_stack_node		*next;
}							t_stack_node;

void			append_node(t_stack_node **node_one, int num);
void			append_node(t_stack_node **node_one, int num);
t_stack_node	*find_smallest_node(t_stack_node *stk);
t_stack_node	*find_last(t_stack_node *stk);
void			finish_rotation(t_stack_node **stk,
					t_stack_node *top, char sname);
void			free_error(t_stack_node **stk_a, char **argv, bool flag_argc_2);
void			free_matrix(char **argv);
void			free_stack(t_stack_node **stack);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
void			init_nodes(t_stack_node *stk_a, t_stack_node *stk_b);
int				main(int argc, char **argv);
void			move_nodes(t_stack_node **stk_a, t_stack_node **stk_b);
void			push(t_stack_node **dest, t_stack_node **src);
void			pa(t_stack_node **a, t_stack_node **b, bool c);
void			pb(t_stack_node **a, t_stack_node **b, bool c);
void			push_swap(t_stack_node **stk_a, t_stack_node **stk_b);
void			ra(t_stack_node **stk_a, bool c);
void			rb(t_stack_node **stk_b, bool c);
int				repeat_err(t_stack_node *stk_a, int number);
void			rev_rotate_both(t_stack_node **stk_a, t_stack_node **stk_b,
					t_stack_node *cheapest_node);
void			rev_rotate(t_stack_node **stk);
void			rotate_both(t_stack_node **stk_a, t_stack_node **stk_b,
					t_stack_node *cheapest_node);
void			rotate(t_stack_node **stk);
void			rr(t_stack_node **stk_a, t_stack_node **stk_b, bool c);
void			rra(t_stack_node **stk_a, bool c);
void			rrb(t_stack_node **stk_b, bool c);
void			rrr(t_stack_node **stk_a, t_stack_node **stk_b, bool c);
void			set_cheapest(t_stack_node *stk_b);
void			set_cur_pos(t_stack_node *stk);
void			set_price(t_stack_node *stk_a, t_stack_node *stk_b);
t_stack_node	*find_target_node(t_stack_node *stk_a, t_stack_node *stk_b);
void			set_target_node(t_stack_node *stk_a, t_stack_node *stk_b);
void			stack_init(t_stack_node **a, char **argv, bool flag_argc_2);
int				stack_length(t_stack_node *stk);
int				syntax_error(char *str_num);
void			*ft_memcpy(void *dst, const void *src, size_t n);
bool			sorted_stack(t_stack_node *stk);
void			sa(t_stack_node **stk_a, bool c);
void			mini_sort(t_stack_node **stk_a);
t_stack_node	*find_highest_node(t_stack_node *stk);
t_stack_node	*cheapest(t_stack_node *stack);
void			handle_five(t_stack_node **stk_a, t_stack_node **stk_b);
void			sa(t_stack_node **stk_a, bool c);
void			sb(t_stack_node **stk_b, bool c);
void			ft_swap(t_stack_node **stk);

#endif
