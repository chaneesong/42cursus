/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:53:30 by chsong            #+#    #+#             */
/*   Updated: 2022/03/18 16:57:05 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_list
{
	int				first;
	int				second;
	int				a_size;
	struct s_node	*a_top;
	struct s_node	*a_bottom;
	int				b_size;
	struct s_node	*b_top;
	struct s_node	*b_bottom;
}	t_list;

int	main(int argc, char *argv[]);

#endif