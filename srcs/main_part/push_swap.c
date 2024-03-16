/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:18:54 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 21:25:10 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*stack_a;
	t_stack_node	*temp;

	stack_a = NULL;
	stack_a = ft_process(argc, argv);
	if (!stack_a || ft_checkdup(stack_a))
	{
		ft_free(&stack_a);
		ft_error();
	}
	temp = stack_a;
	if (!ft_checksorted(stack_a))
		ft_sort(&stack_a);
	ft_free(&stack_a);
	return (0);
}

// paste the below code to print the stack values at that point
// while (temp)
// {
// 	ft_putnbr_fd(temp->number, 1);
// 	ft_putstr_fd(" \n", 1);
// 	if (temp->next == NULL)
// 		break ;
// 	temp = temp->next;
// }