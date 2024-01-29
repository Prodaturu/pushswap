/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:04:44 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/29 09:05:20 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rr(t_stack_node **stk_a, t_stack_node **stk_b, bool c)
{
	rotate(stk_a);
	rotate(stk_b);
	if (!c)
		ft_putstr_fd("rr/n", 1);
}