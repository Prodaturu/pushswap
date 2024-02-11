/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:17:23 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/11 00:04:23 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
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
	if (!sorted_stack(stk_a))
	{
		if (stack_length(stk_a) == 2)
			sa(&stk_a, false);
		else if (stack_length(stk_a) == 3)
			mini_sort(&stk_a);
		else
			push_swap(&stk_a, &stk_b);
	}
	free_stack(&stk_a);
}

// Declare two stack nodes, stk_a and stk_b, to hold the data to be sorted.
// Initialize the stack nodes to NULL to ensure stacks are empty at the start.
// Check if the program has input data. If not, return an error.
// If input data is a single string, split it into separate strings.
// Initialize the stack with the command line arguments.
// If the stack is not sorted...
	// For two elements, perform a swap operation to sort.
	// For three elements, perform a mini sort operation.
	// For more than three elements, perform a push_swap operation.
// Free the memory allocated for the stack to prevent memory leaks.