/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_price.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:22:19 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/11 07:16:08 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_price(t_stack_node *stk_a, t_stack_node *stk_b)
{
	int	len_a;
	int	len_b;

	len_a = stack_length(stk_a);
	len_b = stack_length(stk_b);
	while (stk_b)
	{
		stk_b->push_price = stk_b->cur_pos;
		if (!(stk_b->above_mid))
			stk_b->push_price = len_b - (stk_b->cur_pos);
		if (stk_b->target_node->above_mid)
			stk_b->push_price += stk_b->target_node->cur_pos;
		else
			stk_b->push_price += len_a - (stk_b->target_node->cur_pos);
		stk_b = stk_b->next;
	}
}
