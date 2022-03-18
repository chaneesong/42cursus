/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:53:16 by chsong            #+#    #+#             */
/*   Updated: 2022/03/18 20:03:42 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{	
	t_stack	*a;

	if (argc < 2 || !argv[1][0])
		return (-1);
	argv++;
	a = (t_stack *)ft_calloc(1, sizeof(t_stack));
	parse_argv(a, argv);
	while (a->top)
	{
		printf("%d\n", a->top->value);
		a->top = a->top->prev;
	}
	return (0);
}
