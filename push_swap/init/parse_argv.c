/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:56:17 by chsong            #+#    #+#             */
/*   Updated: 2022/03/23 16:45:38 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_same_value(t_list *stack, t_node *node)
{
	t_node	*top;

	top = stack->a_top;
	while (top)
	{
		if (top->value == node->value)
			return (1);
		top = top->prev;
	}
	return (0);
}

static void	link_node(t_list *stack, char **split)
{
	int		index;
	t_node	*current;

	index = 0;
	while (split && split[index])
	{
		current = create_node(ft_atoi(split[index]));
		if (check_same_value(stack, current))
		{
			print_error();
			exit(-1);
		}
		push_a_bottom(stack, current);
		free(split[index]);
		index++;
	}
}

t_list	*parse_argv(char **argv)
{
	char	**split;
	t_list	*stack;

	argv++;
	stack = (t_list *)ft_calloc(1, sizeof(t_list));
	while (argv && *argv)
	{
		split = ft_split(*argv, ' ');
		link_node(stack, split);
		free(split);
		argv++;
	}
	parse_index(stack);
	return (stack);
}
