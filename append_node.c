/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:34:32 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/10 23:52:47 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The goal of the function is to append a new node to the end of a linked list.
/*
** Function to append a new node to the end of a linked list.
** - If the input node is NULL, return.
** - Allocate memory for the new node.
** - Set the value of the new node to the given number.
** - Set the next and prev pointers of the new node to NULL.
** - If the input node is empty, set it to the new node.
** - Otherwise, find the last node and update its next and prev pointers.
*/

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
