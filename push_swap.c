/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:55:08 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/13 17:43:35 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * This function performs the push_swap algorithm to sort the stack.
 * It takes two stack pointers as arguments: stk_a and stk_b.
 * 
 * The algorithm works as follows:
 * 1. If length of stk_a is 5, use the handle_five fn to sort stack.
 * 2. else, move elements from stk_a to stk_b until 3 elements left in stk_a.
 * 3. Sort the remaining 3 elements in stk_a using the mini_sort function.
 * 4. Move elements from stk_b back to stk_a in the correct order.
 * 5. Find the smallest element in stk_a and move it to the top of the stack.
 * 6. If the smallest element is above the middle of the stack, rotate the stack
 *   until the smallest element is at the top.
 * 7. If the smallest element is below the middle of the stack, reverse rotate the
 *  stack until the smallest element is at the top.
 *
 */

void	push_swap(t_stack_node **stk_a, t_stack_node **stk_b)
{
	int				len_stk_a;
	t_stack_node	*small;

	len_stk_a = stack_length(*stk_a);
	if (len_stk_a == 5)
		handle_five(stk_a, stk_b);
	else
	{
		while (len_stk_a-- > 3)
			pb(stk_b, stk_a, false);
	}
	mini_sort(stk_a);
	while (*stk_b)
	{
		init_nodes(*stk_a, *stk_b);
		move_nodes(stk_a, stk_b);
	}
	set_cur_pos(*stk_a);
	small = find_smallest_node(*stk_a);
	if (small->above_mid)
		while (*stk_a != small)
			ra(stk_a, false);
	else
		while (*stk_a != small)
			rra(stk_a, false);
	// while (*stk_a)
	// {
	// 	if (sorted_stack(*stk_a))
	// 		printf("%d\n", (*stk_a)->val);
	// 	else
	// 		return ;
	// 	// printf("%d\n",(*stk_a)->above_mid);
	// 	*stk_a = (*stk_a)->next;
	// }
}
