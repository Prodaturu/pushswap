/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:28:26 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/05 05:28:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cheapest(t_stack_node *stk_b)
{
	long			best_match_val;
	t_stack_node	*best_match_node;

	if (stk_b == NULL)
		return ;
	best_match_val = LONG_MAX;
	while (stk_b)
	{
		if (stk_b->push_price < best_match_val)
		{
			best_match_val = stk_b->push_price;
			best_match_node = stk_b;
		}
		stk_b = stk_b->next;
	}
	best_match_node->cheapest = true;
}
