/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:56:17 by chsong            #+#    #+#             */
/*   Updated: 2022/03/03 16:01:33 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*parse_argv(char **argv)
{
	char	**split;
	t_node	*current;
	t_node	*init;
	t_list	*stack;

	init = NULL;
	argv++;
	stack = (t_list *)malloc(sizeof(t_list));
	while (argv && *argv)
	{
		split = ft_split(*argv, ' ');
		while (split && *split)
		{
			current = create_node(ft_atoi(*split));
			link_node(&init, current);
			split++;
		}
		argv++;
	}
	init_stack(&stack, init);
	return (stack);
}
