/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:44:02 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/11 09:23:51 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_node(t_stack_node *stk_a, t_stack_node *stk_b)
{
	t_stack_node	*target;

	while (stk_b)
	{
		target = find_target_node(stk_a, stk_b);
		if (target == NULL)
			target = find_smallest_node(stk_a);
		stk_b->target_node = target;
		stk_b = stk_b->next;
	}
}

// void	set_target_node(t_stack_node *stk_a, t_stack_node *stk_b)
// {
// 	t_stack_node	*cur_a;
// 	t_stack_node	*target;
// 	long			best_match_index;

// 	while (stk_b)
// 	{
// 		best_match_index = LONG_MAX;
// 		cur_a = stk_a;
// 		while (cur_a)
// 		{
// 			if (cur_a->val > stk_b->val && cur_a->val < best_match_index)
// 			{
// 				best_match_index = cur_a->val;
// 				target = cur_a;
// 			}
// 			cur_a = cur_a->next;
// 		}
// 		if (best_match_index == LONG_MAX)
// 		{
// 			cur_a = stk_a;
// 			while (cur_a)
// 			{
// 				if (cur_a->val < best_match_index)
// 				{
// 					best_match_index = cur_a->val;
// 					target = cur_a;
// 				}
// 				cur_a = cur_a->next;
// 			}
// 		}
// 		stk_b->target_node = target;
// 		stk_b = stk_b->next;
// 	}
// }
