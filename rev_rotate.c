/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:21:52 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/13 16:24:33 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
void	rev_rotate(t_stack_node **stk)
 * Shift down all elements of stack a by 1.
The last element becomes the first one.
 * 
 * @param stk The pointer to the stack.
 * @param len The length of the stack.
 */

void	rev_rotate(t_stack_node **stk)
{
	t_stack_node	*last;
	int				len;

	len = stack_length(*stk);
	if (len == 1 || !stk || !*stk)
		return ;
	last = find_last(*stk);
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stk;
	(*stk)->prev = last;
	*stk = last;
}

// void rev_rotate(t_stack_node **stk) {
//     t_stack_node *last;

//     if (!stk || !*stk || !(*stk)->next) {
//         return;
//     }

//     last = find_last_node(*stk);

//     // If the stack has only two elements
//     if ((*stk)->next == last) {
//         last->prev = NULL;
//         (*stk)->next = NULL;
//         last->next = *stk;
//         (*stk)->prev = last;
//         *stk = last;
//     } else {
//         // For more than two elements
//         last->prev->next = NULL;
//         last->prev = NULL;
//         last->next = *stk;
//         (*stk)->prev = last;
//         *stk = last;
//     }
// }
