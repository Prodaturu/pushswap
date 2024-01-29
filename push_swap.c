/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:55:08 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/29 09:14:51 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push_swap(t_stack_node **stk_a, t_stack_node **stk_b)
{
	t_stack_node	*small;
	int				len_stk_a;

	len_stk_a = stack_length(*stk_a);
	if (len_stk_a == 5)
		five_handler(stk_a, stk_b);
	else
	{
		while (len_stk_a-- > 3)
			pb(stk_b, stk_a);
	}
	mini_sort(stk_a);
	while (*stk_b)
	{
		init_nodes(*stk_a, *stk_b);
		move_nodes(stk_a, stk_b);
	}
	set_current_pos(*stk_a);
	small = smallest(*stk_a);
	if (small->above_mid)
		while (*stk_a != small)
			ra(stk_a, false);
	else
		while (*stk_a != small)
			rra(stk_a, false);
}
