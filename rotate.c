/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:55:14 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/29 09:01:32 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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
