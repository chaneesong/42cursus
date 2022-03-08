/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:56:17 by chsong            #+#    #+#             */
/*   Updated: 2022/03/08 15:02:50 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_same_value(t_list **stack, t_node *current)
{
	t_node	*top;

	top = (*stack)->a_top;
	while((*stack)->a_top)
	{
		if ((*stack)->a_top->value == current->value)
		{
			(*stack)->a_top = top;
			return (1);
		}
		(*stack)->a_top = (*stack)->a_top->next;
	}
	(*stack)->a_top = top;
	return (0);
}

static void	push_init(t_list **stack, t_node *current)
{
	if((*stack)->a_size == 0)
	{
		(*stack)->a_top = current;
		(*stack)->a_bottom = current;
		(*stack)->a_size++;
		return ;
	}
	(*stack)->a_bottom->prev = current;
	current->next = (*stack)->a_bottom;
	(*stack)->a_bottom = current;
	(*stack)->a_size++;
}

static void	free_split(char **split)
{
	free(split[0]);
}

t_list	*parse_argv(char **argv)
{
	char	**split;
	t_node	*current;
	t_list	*stack;

	argv++;
	stack = (t_list *)ft_calloc(1, sizeof(t_list));
	while (argv && *argv)
	{
		split = ft_split(*argv, ' ');
		while (split && *split)
		{
			current = create_node(ft_atoi(*split));
			if (check_same_value(&stack, current))
				exit(-1);
			push_init(&stack, current);
			split++;
		}
		free_split(split);
		argv++;
	}
	return (stack);
}
