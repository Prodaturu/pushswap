/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_dup_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:34:10 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/15 23:19:46 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack_node	*ft_listlast(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	ft_add_back(t_stack_node **stack, t_stack_node *new)
{
	if (!stack)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	else
		ft_listlast(*stack)->next = new;
	return ;
}

int	ft_checkdup(t_stack_node *a)
{
	t_stack_node	*temp;

	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if (a->number == temp->number)
				return (1);
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}

int	ft_checksorted(t_stack_node *stack_a)
{
	int		num;

	num = stack_a->number;
	while (stack_a)
	{
		if (num > stack_a->number)
			return (0);
		num = stack_a->number;
		stack_a = stack_a->next;
	}
	return (1);
}
