#include "push_swap.h"

void	move_nodes(t_stack_node **stk_a, t_stack_node **stk_b)
{
	t_stack_node	*cheapest_node;
	bool			cheaps_trgt_abv_mid;
	bool			cheap_abv_mid;

	cheapest_node = cheapest(*stk_b);
	cheaps_trgt_abv_mid = cheapest_node->target_node->above_mid;
	cheap_abv_mid = cheapest_node->above_mid;
	if (cheaps_trgt_abv_mid && cheap_abv_mid)
		rotate_both(stk_a, stk_b, cheapest_node);
	else if (!cheaps_trgt_abv_mid && !cheap_abv_mid)
		rev_rotate_both(stk_a, stk_b, cheapest_node);
	finish_rotation(stk_b, cheapest_node, 'b');
	finish_rotation(stk_a, cheapest_node->target_node, 'a');
	pa(stk_a, stk_b, false);
}
