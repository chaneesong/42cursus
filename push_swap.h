/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:38 by chsong            #+#    #+#             */
/*   Updated: 2022/03/02 15:55:46 by chsong           ###   ########.fr       */
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

int		main(int argc, char *argv[]);
void	parse_argv(t_node **stack, char **argv);
t_node	*create_node(int value);
void	push_stack(t_node **stack, t_node *current);
int	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int	ft_isdigit(int c);

#endif
