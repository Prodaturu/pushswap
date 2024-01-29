/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:51:45 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/29 08:52:44 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rrr(t_stack_node **stk_a, t_stack_node **stk_b, bool c)
{
	rev_rotate(stk_a);
	rev_rotate(stk_b);
	if (!c)
		ft_putstr_fd("rrr/n", 1);
}
