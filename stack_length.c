/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:25:21 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/29 08:22:10 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	stack_length(t_stack_node *stk)
{
	int	count;

	count = 0;
	if (stk == NULL)
		return (0);
	while (stk)
	{
		stk = stk->next;
		count++;
	}
	return (count);
}
