/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:34:32 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/28 17:53:13 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	append_node(t_stack_node **node_one, int num)
{
	t_stack_node	*last;
	t_stack_node	*new_node;

	if (node_one == NULL)
		return ;
	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return ;
	new_node->val = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (!*node_one)
		*node_one = new_node;
	else
	{
		last = find_last(*node_one);
		if (last)
		{
			last->next = new_node;
			new_node->prev = last;
		}
	}
}
