/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:11:37 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/11 04:21:09 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	handle_five(t_stack_node **stk_a, t_stack_node **stk_b)
{
	while (stack_len(*stk_a) > 3)
	{
		init_nodes(*stk_a, *stk_b);
		finish_rotation(stk_a, find_smallest(*stk_a), 'a');
		pb(stk_b, stk_a, false);
	}
}

// void	handle_five(t_stack_node **a, t_stack_node **b)
// {
// 	while (stack_length(*a) > 3)
// 	{
// 		if (find_smallest_node(*a)->cur_pos < 3)
// 			pb(b, a, false);
// 		else
// 			ra(a, false);
// 	}
// }
