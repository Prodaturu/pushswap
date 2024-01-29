/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 04:20:22 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/26 08:37:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/**
 * This function pushes the top node from the source stack (src)
 * 		to the top of the destination stack (dest).
 * Both src and dest are pointers to pointers of t_stack_node,
 * 		allowing the function to modify the stacks themselves.
 *
 * @param dest A pointer to the top node of the destination stack.
 * @param src A pointer to the top node of the source stack.
 */

//	Declare a temperory t_stack_node
//	Check errors for missing value and address
// 		return if errors present
//	If no errors remove top node from source
// 		save top node address in a new var (node_in)
// 		move the tope node to next one in src
//	If there is non null top node now point its previous to NULL
//	Set node_in's prev to NULL (new top of dest anyways)
//	Check for empty destnation stack
//		if empty
// 			make detched node new top of dest
//			and point its next to NULL
//		if not empty
//			make it new top of dest
// 				set node_in's next to curr top of dest
// 				set dest prev to node_in
//				now change start of dest to node_in

static void	push(t_stack_node **dest, t_stack_node **src)
{
	t_stack_node		*node_in;

	if (src == NULL || *src == NULL)
		return ;
	node_in = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node_in->prev = NULL;
	if (*dest == NULL)
	{
		*dest = node_in;
		node_in->next = NULL;
	}
	else
	{
		node_in->next = *dest;
		(*dest)->prev = node_in;
		*dest = node_in;
	}
	return ;
}

// static void	push(t_stack_node **dest, t_stack_node **src)
// {
// 	t_stack_node	*node_in;

// 	if (*src == NULL)
// 		return ;
// 	node_in = *src;
// 	*src = (*src)->next;
// 	if (*src)
// 		(*src)->prev = NULL;
// 	node_in->prev = NULL;
// 	if (*dest == NULL)
// 	{
// 		*dest = node_in;
// 		node_in->next = NULL;
// 	}
// 	else
// 	{
// 		node_in->next = *dest;
// 		node_in->next->prev = node_in;
// 		*dest = node_in;
// 	}
// }
