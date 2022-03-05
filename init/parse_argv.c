/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:56:17 by chsong            #+#    #+#             */
/*   Updated: 2022/03/05 18:44:17 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
			push_init(&stack, current);
			split++;
		}
		argv++;
	}
	return (stack);
}
