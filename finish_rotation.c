/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish_rotation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 04:11:43 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/05 05:28:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finish_rotation(t_stack_node **stk, t_stack_node *top,
	char sname)
{
	while (*stk != top)
	{
		if (sname == 'a')
		{
			if (top->above_mid)
				ra(stk, false);
			else
				rra(stk, false);
		}
		else
		{
			if (top->above_mid)
				rb(stk, false);
			else
				rrb(stk, false);
		}
	}
}
