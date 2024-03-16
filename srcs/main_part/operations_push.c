/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:20:11 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 13:06:10 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack_node **a, t_stack_node **b, int isprint)
{
	t_stack_node	*temp;

	if (!*b)
		return ;
	temp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = temp;
	if (isprint)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack_node **a, t_stack_node **b, int isprint)
{
	t_stack_node	*temp;

	if (!*a)
		return ;
	temp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = temp;
	if (isprint)
		ft_putstr_fd("pb\n", 1);
}