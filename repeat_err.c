/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 04:16:13 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/23 04:19:14 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	repeat_err(t_stack_node *a, int number)
{
	if (a == NULL)
		return (0);
	while (a)
	{
		if (a->value == number)
			return (1);
	}
	return (0);
}
