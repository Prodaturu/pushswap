/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 06:11:54 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 07:35:03 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_min(t_stack_node	*stack)
{
	int	minimum;

	minimum = INT_MAX;
	minimum = stack->number;
	while (stack)
	{
		if (stack->number < minimum)
			minimum = stack->number;
		stack = stack->next;
	}
	return (minimum);
}

int	ft_max(t_stack_node	*stack)
{
	int	maximum;

	maximum = INT_MIN;
	maximum = stack->number;
	while (stack)
	{
		if (stack->number > maximum)
			maximum = stack->number;
		stack = stack->next;
	}
	return (maximum);
}

int	list_size(t_stack_node *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

int	find_index(t_stack_node *stack, int nummer)
{
	int	num;

	num = 0;
	while (stack->number != nummer)
	{
		stack = stack->next;
		num++;
	}
	stack->index = 0;
	return (num);
}
