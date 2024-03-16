/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:01:12 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 08:17:49 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_apply_rarb(t_stack_node **a, t_stack_node **b, int n, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != n && (find_place_inb(*b, n) > 0))
			rr(a, b, 1);
		while ((*a)->number != n)
			ra(a, 1);
		while (find_place_inb(*b, n) > 0)
			rb(b, 1);
		pb(a, b, 1);
	}
	else
	{
		while ((*b)->number != n && find_place_ina(*a, n) > 0)
			rr(a, b, 1);
		while ((*b)->number != n)
			rb(b, 1);
		while (find_place_ina(*a, n) > 0)
			ra(a, 1);
		pa(a, b, 1);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack_node **a, t_stack_node **b, int n, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != n && find_place_inb(*b, n) > 0)
			rrr(a, b, 1);
		while ((*a)->number != n)
			rra(a, 1);
		while (find_place_inb(*b, n) > 0)
			rrb(b, 1);
		pb(a, b, 1);
	}
	else
	{
		while ((*b)->number != n && find_place_ina(*a, n) > 0)
			rrr(a, b, 1);
		while ((*b)->number != n)
			rrb(b, 1);
		while (find_place_ina(*a, n) > 0)
			rra(a, 1);
		pa(a, b, 1);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack_node **a, t_stack_node **b, int n, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != n)
			rra(a, 1);
		while (find_place_inb(*b, n) > 0)
			rb(b, 1);
		pb(a, b, 1);
	}
	else
	{
		while (find_place_ina(*a, n) > 0)
			rra(a, 1);
		while ((*b)->number != n)
			rb(b, 1);
		pa(a, b, 1);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack_node **a, t_stack_node **b, int n, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != n)
			ra(a, 1);
		while (find_place_inb(*b, n) > 0)
			rrb(b, 1);
		pb(a, b, 1);
	}
	else
	{
		while (find_place_ina(*a, n) > 0)
			ra(a, 1);
		while ((*b)->number != n)
			rrb(b, 1);
		pa(a, b, 1);
	}
	return (-1);
}
