/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:02:21 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/11 00:12:05 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Check for white space characters.
// so that we can skip them in input string.
int	ft_iswhite(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n')
		|| (c == '\f') || (c == '\r') || (c == '\v'))
		return (1);
	return (0);
}

// Convert a string to an integer.
// - Skip white space characters.
// - Check for a sign character.
// - Convert the string to an integer.
// - Return the integer.
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	index;

	result = 0;
	sign = 1;
	index = 0;
	while (ft_iswhite(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while ((str[index] >= '0') && (str[index] <= '9'))
	{
		result = 10 * result + (str[index] - '0');
		index++;
	}
	return (result * sign);
}

// Initialize the stack with the input data. This is the main function in this file.
	// Loop over the input data.
		// syntax error in input -> free memory & exit program
		// Convert the current input string to an integer.
		// If integer is out of range or is duplicate, free memory & exit program
		// If there is a repeat error, free the memory and exit the program.
		// Add the integer to the stack.
    // If the input data was provided as a single string, free the memory allocated for the split strings.

void	stack_init(t_stack_node **a, char **argv, bool flag_argc_2)
{
	int	i;
	int	num;

	i = 0;
	while (argv[i])
	{
		if (syntax_error(argv[i]))
			free_error(a, argv, flag_argc_2);
		num = ft_atoi(argv[i]);
		if (num > INT_MAX || num < INT_MIN || repeat_error(*a, num))
			free_error(a, argv, flag_argc_2);
		if (repeat_err(*a, argv, flag_argc_2))
			free_error(a, argv, flag_argc_2);
		append_node(a, num);
		++i;
	}
	if (flag_argc_2)
		free_matrix(argv);
}
