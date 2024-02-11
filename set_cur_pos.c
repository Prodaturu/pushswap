/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cur_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 04:24:59 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/05 05:28:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cur_pos(t_stack_node *stk)
{
	int	index;
	int	center;

	index = 0;
	if (!stk)
		return ;
	center = stack_length(stk) / 2;
	while (stk)
	{
		stk->cur_pos = index;
		if (index <= center)
			stk->above_mid = true;
		else
			stk->above_mid = false;
		stk = stk->next;
		index++;
	}
}
