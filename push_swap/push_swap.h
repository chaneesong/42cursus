/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:53:30 by chsong            #+#    #+#             */
/*   Updated: 2022/03/18 18:28:55 by chsong           ###   ########.fr       */
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

typedef struct s_stack
{
	struct s_node	*top;
	struct s_node	*bottom;
	int				size;
}	t_stack;

int	main(int argc, char *argv[]);

/* init function */
void	init_push(t_stack *a, int value);

/* parse function */
void	parse_argv(t_stack *a, char **argv);

/* util function */
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);

#endif
