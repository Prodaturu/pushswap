/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:08:36 by sprodatu          #+#    #+#             */
/*   Updated: 2024/01/29 07:28:41 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack_node
{
	int						val;
	int						cur_pos;
	int						fin_index;
	int						push_price;
	bool					above_mid;
	bool					cheapest;
	struct s_stack_node		*target_node;
	struct s_stack_node		*prev;
	struct s_stack_node		*next;
}							t_stack_node;

char		**ft_split(char const *s, char c);
void		stack_init(t_stack_node **a, char **argv, bool flag_argc_2);
int			main(int argc, int **argv);
void		ft_putstr_fd(char *s, int fd);
void		free_stack(t_stack_node **stack);

#endif