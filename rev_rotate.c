/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:21:52 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/29 08:48:41 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rev_rotate(t_stack_node **stk)
{
	t_stack_node	*last;
	int				len;

	if (len == 1 || !stk || !*stk)
		return ;
	len = stack_length(*stk);
	last = find_last_node(*stk);
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stk;
	*stk = last;
	last->next->prev = last;
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
