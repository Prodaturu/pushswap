/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:05:33 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 20:02:58 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_rotate_type_ba(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*temp;
	int				index;

	temp = b;
	index = case_rrarrb2(a, b, temp->number);
	while (temp)
	{
		if (index > case_rarb2(a, b, temp->number))
			index = case_rarb2(a, b, temp->number);
		if (index > case_rrarrb2(a, b, temp->number))
			index = case_rrarrb2(a, b, temp->number);
		if (index > case_rarrb2(a, b, temp->number))
			index = case_rarrb2(a, b, temp->number);
		if (index > case_rrarb2(a, b, temp->number))
			index = case_rrarb2(a, b, temp->number);
		temp = temp->next;
	}
	return (index);
}

int	ft_rotate_type_ab(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*temp;
	int				index;

	temp = a;
	index = case_rrarrb(a, b, a->number);
	while (temp)
	{
		if (index > case_rarb(a, b, temp->number))
			index = case_rarb(a, b, temp->number);
		if (index > case_rrarrb(a, b, temp->number))
			index = case_rrarrb(a, b, temp->number);
		if (index > case_rarrb(a, b, temp->number))
			index = case_rarrb(a, b, temp->number);
		if (index > case_rrarb(a, b, temp->number))
			index = case_rrarb(a, b, temp->number);
		temp = temp->next;
	}
	return (index);
}
