/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 03:29:37 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 07:38:37 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_digit(int digit)
{
	if (digit >= '0' && digit <= '9')
		return (1);
	return (0);
}

t_stack_node	*ft_new_stack_node(int new_val)
{
	t_stack_node	*new_node;

	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		ft_error();
	new_node->number = new_val;
	new_node->next = NULL;
	return (new_node);
}

void	ft_free_str(char **stack_node)
{
	char	*temp;

	if (!stack_node)
		return ;
	while (*stack_node)
	{
		temp = *stack_node;
		stack_node++;
		free(temp);
	}
	*stack_node = NULL;
}

int	find_place_ina(t_stack_node *a, int n)
{
	int				index;
	t_stack_node	*temp;

	index = 1;
	if (n < a->number && n > ft_listlast(a)->number)
		return (0);
	else if (n > ft_max(a) || n < ft_min(a))
		return (find_index(a, ft_min(a)));
	else
	{
		temp = a->next;
		while (a->number > n || temp->number < n)
		{
			index++;
			a = a->next;
			temp = a->next;
		}
	}
	return (index);
}

int	find_place_inb(t_stack_node *b, int n)
{
	int				index;
	t_stack_node	*temp;

	index = 1;
	if (n > ft_max(b) || n < ft_listlast(b)->number)
		return (0);
	else if (n > ft_max(b) || n < ft_min(b))
		return (find_index(b, ft_max(b)));
	else
	{
		temp = b->next;
		while (b->number < n || temp->number > n)
		{
			index++;
			b = b->next;
			temp = b->next;
		}
	}
	return (index);
}
