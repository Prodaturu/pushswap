/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_highest_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:44:32 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/08 10:52:14 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_highest_node(t_stack_node *stk)
{
	int				highest;
	t_stack_node	*highest_node;

	if (!stk || stk == NULL)
		return (NULL);
	highest = stk->val;
	highest_node = stk;
	while (stk)
	{
		if (stk->val > highest)
		{
			highest = stk->val;
			highest_node = stk;
		}
		stk = stk->next;
	}
	return (highest_node);
}
