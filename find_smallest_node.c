/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 23:38:13 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/05 05:28:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_smallest_node(t_stack_node *stk)
{
	t_stack_node	*smallest;

	if (stk == NULL)
		return (NULL);
	smallest = stk;
	while (stk)
	{
		if (stk->val < smallest->val)
			smallest = stk;
		stk = stk->next;
	}
	return (smallest);
}
