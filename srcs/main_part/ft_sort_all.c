/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:18:51 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 16:05:08 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_3(t_stack_node **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->number)
	{
		rra(stack_a, 1);
		sa(stack_a, 1);
	}
	else if (ft_max(*stack_a) == (*stack_a)->number)
	{
		ra(stack_a, 1);
		if (!ft_checksorted(*stack_a))
			sa(stack_a, 1);
	}
	else
	{
		if (find_index(*stack_a, ft_max(*stack_a)) == 1)
			rra(stack_a, 1);
		else
			sa(stack_a, 1);
	}
}

void	ft_sort_b_till_3(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*temp;
	int				index;

	while (list_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		temp = *stack_a;
		index = ft_rotate_type_ba(*stack_a, *stack_b);
		while (index > 0)
		{
			if (index == case_rarb(*stack_a, *stack_b, temp->number))
				index = ft_apply_rarb(stack_a, stack_b, temp->number, 'a');
			else if (index == case_rrarrb(*stack_a, *stack_b, temp->number))
				index = ft_apply_rrarrb(stack_a, stack_b, temp->number, 'a');
			else if (index == case_rarrb(*stack_a, *stack_b, temp->number))
				index = ft_apply_rarrb(stack_a, stack_b, temp->number, 'a');
			else if (index == case_rrarb(*stack_a, *stack_b, temp->number))
				index = ft_apply_rrarb(stack_a, stack_b, temp->number, 'a');
			else
				temp = temp->next;
		}
	}
}

t_stack_node	*ft_sort_b(t_stack_node **stack_a)
{
	t_stack_node	*stack_b;

	stack_b = NULL;
	if (list_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
		pb(stack_a, &stack_b, 1);
	if (list_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
		pb(stack_a, &stack_b, 1);
	if (list_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
		ft_sort_b_till_3(stack_a, &stack_b);
	if (!ft_checksorted(*stack_a))
		ft_sort_3(stack_a);
	return (stack_b);
}

t_stack_node	**ft_sort_a(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*temp;
	int				index;

	while (*stack_b)
	{
		temp = *stack_b;
		index = ft_rotate_type_ba(*stack_a, *stack_b);
		while (index >= 0)
		{
			if (index == case_rarb2(*stack_a, *stack_b, temp->number))
				index = ft_apply_rarb(stack_a, stack_b, temp->number, 'b');
			else if (index == case_rarrb2(*stack_a, *stack_b, temp->number))
				index = ft_apply_rarrb(stack_a, stack_b, temp->number, 'b');
			else if (index == case_rrarrb2(*stack_a, *stack_b, temp->number))
				index = ft_apply_rrarrb(stack_a, stack_b, temp->number, 'b');
			else if (index == case_rrarb2(*stack_a, *stack_b, temp->number))
				index = ft_apply_rrarb(stack_a, stack_b, temp->number, 'b');
			else
				temp = temp->next;
		}
	}
	return (stack_a);
}

void	ft_sort(t_stack_node **stack_a)
{
	t_stack_node	*stack_b;
	int				index;

	stack_b = NULL;
	if (list_size(*stack_a) == 2)
		sa(stack_a, 1);
	else
	{
		printf("stack_a: ");
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		index = find_index(*stack_a, ft_min(*stack_a));
		if (index < list_size(*stack_a) - index)
			while ((*stack_a)->number != ft_min(*stack_a))
				ra(stack_a, 1);
		else
			while ((*stack_a)->number != ft_min(*stack_a))
				rra(stack_a, 1);
	}
}
