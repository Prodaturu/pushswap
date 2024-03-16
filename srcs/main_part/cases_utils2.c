/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:21:48 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/12 06:38:04 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	case_rarb2(t_stack_node *a, t_stack_node *b, int num)
{
	int	index;

	index = find_place_ina(a, num);
	if (index < find_index(b, num))
		index = find_index(b, num);
	return (index);
}

int	case_rrarrb2(t_stack_node *a, t_stack_node *b, int num)
{
	int	index;

	index = 0;
	if (find_place_ina(a, num))
		index = list_size(a) - find_place_ina(a, num);
	if ((index < (list_size(b) - find_index(b, num))) && (find_index(b, num)))
		index = list_size(b) - find_index(b, num);
	return (index);
}

int	case_rarrb2(t_stack_node *a, t_stack_node *b, int num)
{
	int	index;

	index = 0;
	if (find_index(b, num))
		index = list_size(b) - find_index(b, num);
	index += find_place_ina(a, num);
	return (index);
}

int	case_rrarb2(t_stack_node *a, t_stack_node *b, int num)
{
	int	index;

	index = 0;
	if (find_place_ina(a, num))
		index = list_size(a) - find_place_ina(a, num);
	index += find_index(b, num);
	return (index);
}
