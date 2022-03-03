/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:38 by chsong            #+#    #+#             */
/*   Updated: 2022/03/03 15:18:40 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	struct s_node	*prev;
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_list
{
	struct s_node	*top;
	struct s_node	*bottom;
	int				size;
}	t_list;

int		main(int argc, char *argv[]);
t_list	*parse_argv(t_node **stack, char **argv);
t_node	*create_node(int value);
t_node	*pop_stack(t_node **stack);
void	link_node(t_node **current);

int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);

#endif
