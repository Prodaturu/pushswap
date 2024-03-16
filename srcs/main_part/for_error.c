/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:56:14 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 04:38:07 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	ft_free(t_stack_node **stk)
{
	t_stack_node	*temp;

	if (!stk)
		return ;
	while (*stk)
	{
		temp = (*stk)->next;
		(*stk)->number = 0;
		free(*stk);
		*stk = temp;
	}
	return ;
}

void	ft_freestr(char **stk)
{
	char	*temp;

	if (!stk)
		return ;
	while (*stk)
	{
		temp = *stk;
		stk++;
		free(temp);
	}
	*stk = NULL;
	return ;
}
