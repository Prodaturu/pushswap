/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:17:23 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/28 10:02:08 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, int **argv)
{
	t_stack_node	*stk_a;
	t_stack_node	*stk_b;

	stk_a = NULL;
	stk_b = NULL;
	if (argc == 1 || (argc == 2 && !(argv[1][0])))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	stack_init(&stk_a, argv + 1, argc == 2);
	if (!sorted_stack(a))
	{
		if (stack_length(a) == 2)
			sa(&stk_a, false);
		else if (stack_length == 3)
			mini_sort(&stk_a);
		else
			pushswap(&stk_a, &stk_b);
	}
	free_stack(&stk_a);
}
