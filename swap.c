/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:45:01 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/08 12:28:53 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack_node **stk)
{
	t_stack_node	*temp;
	int				length;

	length = stack_len(*stk);
	if (!stk || !*stk || length <= 1)
		return ;
	temp = *stk;
	*stk = temp->next;
	temp->next = (*stk)->next;
	(*stk)->next = temp;
	return ;
}

// We are going to swap the first two elements of the stack
// If the stack is empty or has only one element, we do nothing
// We swap the first two elements of the stack