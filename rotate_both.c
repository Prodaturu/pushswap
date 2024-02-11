/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 04:04:01 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/05 05:28:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack_node **stk_a, t_stack_node **stk_b,
	t_stack_node *cheapest_node)
{
	while (*stk_b != cheapest_node && *stk_a != cheapest_node->target_node)
		rr(stk_a, stk_b, false);
	set_cur_pos(*stk_a);
	set_cur_pos(*stk_b);
}
