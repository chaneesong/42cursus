/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:37:49 by chsong            #+#    #+#             */
/*   Updated: 2022/03/18 20:02:14 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	parse_argv(t_stack *a, char **argv)
{
	char	**current;
	int		i;

	while (argv && *argv)
	{
		i = 0;
		current = ft_split(*argv, ' ');
		while (current && current[i])
		{
			init_push(a, ft_atoi(current[i]));
			i++;
		}
		free(current);
		argv++;
	}
}