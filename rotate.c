/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:55:14 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/05 05:28:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack_node **stk)
{
	t_stack_node	*last;
	int				len;

	len = stack_length(*stk);
	if (len == 1 || !stk || !*stk)
		return ;
	last = find_last(*stk);
	last->next = *stk;
	*stk = (*stk)->next;
	(*stk)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}
