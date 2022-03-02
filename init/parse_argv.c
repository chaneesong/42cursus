/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:56:17 by chsong            #+#    #+#             */
/*   Updated: 2022/03/02 15:13:52 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	parse_argv(t_node **stack, char **argv)
{
	char	**split;
	t_node	*current;

	argv++;
	while (argv && *argv)
	{
		split = ft_split(*argv, ' ');
		while (split && *split)
		{
			current = create_node(ft_atoi(*split));
			push_stack(stack, current);
			split++;
		}
		argv++;
	}
}
