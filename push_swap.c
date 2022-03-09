/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:13 by chsong            #+#    #+#             */
/*   Updated: 2022/03/09 17:33:44 by chsong           ###   ########.fr       */
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
	// t_node	*tmp;

	if (argc == 1)
		return (0);
	if (argc < 2 || check_null(argv))
	{
		print_error();
		exit(-1);
	}
	stack = parse_argv(argv);
	sort_stack(stack);
	printf("stack A = ");
	while (stack->a_top)
	{
		printf("%d ", stack->a_top->value);
		stack->a_top = stack->a_top->prev;
	}
	printf("\nstack B = ");
	while (stack->b_top)
	{
		printf("%d ", stack->b_top->value);
		stack->b_top = stack->b_top->prev;
	}
	printf("\n");
	return (0);
}
