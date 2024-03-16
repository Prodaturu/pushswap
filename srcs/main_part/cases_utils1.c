/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:42:52 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 07:27:52 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	case_rrarrb(t_stack_node *a, t_stack_node *b, int num)
{
	int	index;

	index = 0;
	if (find_place_inb(b, num))
		index = list_size(b) - find_place_inb(b, num);
	if ((index < (list_size(a) - find_index(a, num))) && find_index(a, num))
		index = list_size(a) - find_index(a, num);
	return (index);
}

int	case_rarb(t_stack_node *a, t_stack_node *b, int num)
{
	int	index;

	index = find_place_inb(b, num);
	if (index < find_index(a, num))
		index = find_index(a, num);
	return (index);
}

int	case_rrarb(t_stack_node *a, t_stack_node *b, int num)
{
	int	index;

	index = 0;
	if (find_index(a, num))
		index = list_size(a) - find_index(a, num);
	index += find_place_inb(b, num);
	return (index);
}

int	case_rarrb(t_stack_node *a, t_stack_node *b, int num)
{
	int	index;

	index = 0;
	if (find_place_inb(b, num))
		index = list_size(b) - find_place_inb(b, num);
	index += find_index(a, num);
	return (index);
}
