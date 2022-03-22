/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:50:39 by chsong            #+#    #+#             */
/*   Updated: 2022/03/23 03:54:12 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

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
void	push_a_top(t_list *stack, t_node *node);
void	push_b_top(t_list *stack, t_node *node);
void	push_a_bottom(t_list *stack, t_node *node);
void	push_b_bottom(t_list *stack, t_node *node);
t_node	*pop_a_top(t_list *stack);
t_node	*pop_b_top(t_list *stack);
t_node	*pop_a_bottom(t_list *stack);
t_node	*pop_b_bottom(t_list *stack);
void	parse_index(t_list *stack);

/* operation part*/
void	pa(t_list *stack);
void	pb(t_list *stack);
void	sb(t_list *stack, int check);
void	sa(t_list *stack, int check);
void	ss(t_list *stack);
void	ra(t_list *stack, int check);
void	rb(t_list *stack, int check);
void	rr(t_list *stack);
void	rra(t_list *stack, int check);
void	rrb(t_list *stack, int check);
void	rrr(t_list *stack);

/*sort part*/
void	sort_stack(t_list *stack);
void	sort_two_node(t_list *stack);
void	sort_three_node(t_list *stack);
void	sort_five_node(t_list *stack);
void	a_to_b(t_list *stack);

/*util part*/
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
void	print_operator(char *str, int check);
void	print_error(void);

#endif
