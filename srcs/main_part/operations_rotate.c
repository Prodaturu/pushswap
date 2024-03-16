/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:22:37 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 16:33:23 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack_node **a, int isprint)
{
	t_stack_node	*temp;

	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = ft_listlast(*a);
	(*a)->next = temp;
	temp->next = NULL;
	sleep(1);
	if (isprint)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack_node **b, int isprint)
{
	t_stack_node	*temp;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = ft_listlast(*b);
	(*b)->next = temp;
	temp->next = NULL;
	if (isprint)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack_node **a, t_stack_node **b, int isprint)
{
	ra(a, 0);
	rb(b, 0);
	if (isprint)
		ft_putstr_fd("rr\n", 1);
}
