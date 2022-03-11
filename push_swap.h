/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:38 by chsong            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/03/11 16:38:34 by chsong           ###   ########.fr       */
=======
/*   Updated: 2022/03/10 22:02:37 by chsong           ###   ########.fr       */
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e
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
	int				first;
	int				second;
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
void	push_a(t_list *stack, t_node *node);
void	push_b(t_list *stack, t_node *node);
t_node	*pop_a(t_list *stack);
t_node	*pop_b(t_list *stack);

/* operation part*/
void	sb(t_list *stack);
void	sa(t_list *stack);
void	ss(t_list *stack);
void	pa(t_list *stack);
void	pb(t_list *stack);
void	ra(t_list *stack);
void	rb(t_list *stack);
void	rr(t_list *stack);
void	rra(t_list *stack);
void	rrb(t_list *stack);
void	rrr(t_list *stack);

/*utils part*/
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
void	print_error(void);

void	sort_stack(t_list *stack);
void	sort_two_node(t_list *stack);
void	sort_three_node(t_list *stack);
void	find_pivot(t_list *stack);
void	sort_big_size(t_list *stack);
<<<<<<< HEAD
int		return_value(int total, int cur_size);
int		low_value(t_list *stack, t_node *current);
int		high_value(t_list *stack, t_node *current);
int		upsign(int value);
=======
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e

#endif
