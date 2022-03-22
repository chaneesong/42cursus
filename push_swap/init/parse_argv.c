/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:56:17 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 12:16:38 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_same_value(t_list *stack, t_node *current)
{
	t_node	*top;

	top = stack->a_top;
	while (stack->a_top)
	{
		if (stack->a_top->value == current->value)
		{
			stack->a_top = top;
			return (1);
		}
		stack->a_top = stack->a_top->next;
	}
	stack->a_top = top;
	return (0);
}

t_list	*parse_argv(char **argv)
{
	char	**split;
	t_node	*current;
	t_list	*stack;
	int		tmp;

	argv++;
	stack = (t_list *)ft_calloc(1, sizeof(t_list));
	while (argv && *argv)
	{
		split = ft_split(*argv, ' ');
		tmp = 0;
		while (split && split[tmp])
		{
			current = create_node(ft_atoi(split[tmp]));
			if (check_same_value(stack, current))
				exit(-1);
			push_a_bottom(stack, current);
			free(split[tmp]);
			tmp++;
		}
		free(split);
		argv++;
	}
	parse_index(stack);
	return (stack);
}
