/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:27:42 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/28 11:44:48 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack_node	*find_last(t_stack_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = (lst->next);
	return (lst);
}
