/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:03:53 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/08 12:41:44 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mini_sort(t_stack_node **stk_a)
{
	t_stack_node	*highest;

	highest = find_highest_node(*stk_a);
	if (*stk_a == highest)
		ra(stk_a, false);
	else if ((*stk_a)->next == highest)
		rra(stk_a, false);
	if ((*stk_a)->val > (*stk_a)->next->val)
		sa(stk_a, false);
	return ;
}

// After fundung the highest move it down
// Now the top two are the only ones to check
// swap them if second is smaller than first