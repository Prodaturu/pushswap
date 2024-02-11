/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:26:31 by sprodatu          #+#    #+#             */
/*   Updated: 2024/02/05 05:28:43 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Checks whether there is any error in str syntax
int	syntax_error(char *str_num)
{
	if (((*str_num == '+' || *str_num == '-') && (*(str_num + 1) == '\0'))
		|| *str_num == '\0')
		return (1);
	if (*str_num == '+' || *str_num == '-')
		str_num++;
	while (*str_num)
	{
		if (*str_num < '0' || *str_num > '9')
			return (1);
	}
	return (0);
}
