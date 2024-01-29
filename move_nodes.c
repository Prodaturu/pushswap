/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 07:47:16 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/29 08:15:55 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	move_nodes(t_stack_node **stk_a, t_stack_node **stk_b)
{
	t_stack_node	*cheapest_node;
	bool			cheaps_trgt_abv_mid;
	bool			cheap_abv_mid;

	cheaps_trgt_abv_mid = cheapest_node->target_node->above_mid;
	cheap_abv_mid = cheapest_node->above_mid;
	cheapest_node = cheapest(*stk_b);
	if (cheaps_trgt_abv_mid && cheap_abv_mid)
		rotate_both(stk_a, stk_b, cheapest_node);
	else if (!cheaps_trgt_abv_mid && !cheap_abv_mid)
		rev_rotate_both(stk_a, stk_b, cheapest_node);
	fin_rotation(stk_b, cheapest_node, 'b');
	fin_rotation(stk_a, cheapest_node->target_node, 'a');
	pa(stk_a, stk_b, false);
}
