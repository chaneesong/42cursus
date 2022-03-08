/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:38 by chsong            #+#    #+#             */
/*   Updated: 2022/03/08 17:48:49 by chsong           ###   ########.fr       */
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
void	sa(t_list **stack);
void	sb(t_list **stack);
void	ss(t_list **stack);
void	pa(t_list **stack);
void	pb(t_list **stack);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack);

/*utils part*/
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
void	print_error(void);

void	sort_stack(t_list **stack);

#endif
