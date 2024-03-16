/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:53:39 by sprodatu          #+#    #+#             */
/*   Updated: 2023/10/08 01:31:42 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int num)
{
	if ((num <= '9' && num >= '0')
		|| (num <= 'Z' && num >= 'A') || (num <= 'z' && num >= 'a'))
	{
		return (1);
	}
	return (0);
}