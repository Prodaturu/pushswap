/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 09:24:08 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/11 15:16:22 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_target_node(t_stack_node *stk_a, t_stack_node *stk_b)
{
	t_stack_node	*cur_a;
	t_stack_node	*target;
	long			best_match_index;

	cur_a = stk_a;
	target = NULL;
	best_match_index = LONG_MAX;
	while (cur_a)
	{
		if (cur_a->val > stk_b->val && cur_a->val < best_match_index)
		{
			best_match_index = cur_a->val;
			target = cur_a;
		}
		cur_a = cur_a->next;
	}
	return (target);
}
