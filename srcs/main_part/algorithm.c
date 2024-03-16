/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:24:13 by sprodatu          #+#    #+#             */
/*   Updated: 2024/03/16 18:08:17 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_atoi2(const char *s)
{
	int				sign;
	long long int	value;

	sign = 1;
	value = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n'
		|| *s == '\v' || *s == '\f' || *s == '\r')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s)
	{
		if (!is_digit(*s))
			ft_error();
		value = value * 10 + (*s - '0');
		s++;
	}
	if (value * sign > INT_MAX || value * sign < INT_MIN)
		ft_error();
	return (value * sign);
}

t_stack_node	*ft_sub_process(char **argv)
{
	t_stack_node	*a;
	char			**temp;
	int				index;
	int				num;

	index = 0;
	a = NULL;
	temp = ft_split(argv[1], ' ');
	while (temp[index])
	{
		num = ft_atoi2(temp[index]);
		ft_add_back(&a, ft_new_stack_node(num));
		index++;
	}
	ft_free_str(temp);
	free(temp);
	return (a);
}

/**
 * @brief Processes command line arguments and creates stack of int.
 *
 * If the number of arguments is 2,
 * 	it calls the ft_sub_process function and returns its result.
 * If the number of arguments is less than or equal to 1,
  	it calls the ft_error function.
 * Otherwise, it iterates through the arguments and
 	converts each argument to an int using ft_atoi2 function.
 * It then creates a new stack node with value and adds it to stack.
 *
 * @param argc The number of command line arguments.
 * @param argv An array of strings containing the command line arguments.
 * @return A pointer to the head of the stack.
 */

t_stack_node	*ft_process(int argc, char **argv)
{
	t_stack_node	*stk_a;
	int				index;
	int				num;

	index = 1;
	stk_a = NULL;
	if (argc == 2)
		return (ft_sub_process(argv));
	if (argc <= 1)
		ft_error();
	else
	{
		while (index < argc)
		{
			num = ft_atoi2(argv[index]);
			ft_add_back(&stk_a, ft_new_stack_node(num));
			index++;
		}
	}
	return (stk_a);
}
