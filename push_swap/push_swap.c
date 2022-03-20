/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:13 by chsong            #+#    #+#             */
/*   Updated: 2022/03/20 14:23:08 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_null(char **argv)
{
	while (*argv)
	{
		if (*argv[0] == 0)
			return (1);
		argv++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*stack;

	if (argc == 1)
		return (0);
	if (argc < 2 || check_null(argv))
	{
		print_error();
		exit(-1);
	}
	stack = parse_argv(argv);
	return (0);
}
