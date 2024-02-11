/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 04:16:13 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/05 05:28:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	repeat_err(t_stack_node *stk_a, int number)
{
	if (stk_a == NULL)
		return (0);
	while (stk_a)
	{
		if (stk_a->val == number)
			return (1);
		stk_a = stk_a->next;
	}
	return (0);
}
