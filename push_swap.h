/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:38 by chsong            #+#    #+#             */
/*   Updated: 2022/03/05 16:32:30 by chsong           ###   ########.fr       */
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
	int				a_size;
	struct s_node	*a_top;
	struct s_node	*a_bottom;
	int				b_size;
	struct s_node	*b_top;
	struct s_node	*b_bottom;
}	t_list;

/* main function*/
int		main(int argc, char *argv[]);

/*init part*/
t_list	*parse_argv(char **argv);
t_node	*create_node(int value);
void	push_a(t_list **stack, t_node *node);
void	push_b(t_list **stack, t_node *node);
t_node	*pop_a(t_list **stack);
t_node	*pop_b(t_list **stack);

/* operation part*/


/*utils part*/
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
void	*ft_calloc(size_t count, size_t size);
void	print_error();

#endif
