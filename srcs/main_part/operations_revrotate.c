/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_revrotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:24:41 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 13:06:26 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack_node **a, int isprint)
{
	t_stack_node	*temp;
	int				index;

	index = 0;
	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		index++;
	}
	(*a)->next = temp;
	while (index > 1)
	{
		temp = temp->next;
		index--;
	}
	temp->next = NULL;
	if (isprint)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack_node **b, int isprint)
{
	t_stack_node	*temp;
	int				index;

	index = 0;
	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	while ((*b)->next)
	{
		index++;
		*b = (*b)->next;
	}
	(*b)->next = temp;
	while (index > 1)
	{
		temp = temp->next;
		index--;
	}
	temp->next = NULL;
	if (isprint)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack_node **a, t_stack_node **b, int isprint)
{
	rra(a, 0);
	rrb(b, 0);
	if (isprint)
		ft_putstr_fd("rrr\n", 1);
}
