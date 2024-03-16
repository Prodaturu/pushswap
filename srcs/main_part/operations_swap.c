/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:16:53 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 13:10:05 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack_node **a, int isprint)
{
	t_stack_node	*temp;

	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	if (isprint)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack_node **b, int isprint)
{
	t_stack_node	*temp;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	if (isprint)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack_node **a, t_stack_node **b, int isprint)
{
	sa(a, 0);
	sb(b, 0);
	if (isprint)
		ft_putstr_fd("ss\n", 1);
}

// // void	ss(t_stack_node **a, t_stack_node **b, int isprint)
// // {
// // 	t_stack_node	*tmp;

// // 	if (!*a || !((*a)->next) || !*b || !((*b)->next))
// // 		return ;
// // 	tmp = *a;
// // 	*a = (*a)->next;
// // 	tmp->next = (*a)->next;
// // 	(*a)->next = tmp;
// // 	tmp = *b;
// // 	*b = (*b)->next;
// // 	tmp->next = (*b)->next;
// // 	(*b)->next = tmp;
// // 	if (isprint)
// // 		ft_putstr_fd("ss\n", 1);
// // }
