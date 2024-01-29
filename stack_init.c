/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:02:21 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/28 10:34:41 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_iswhite(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n')
		|| (c == '\f') || (c == '\r') || (c == '\v'))
		return (1);
	return (0);
}

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
