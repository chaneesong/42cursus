/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:13 by chsong            #+#    #+#             */
/*   Updated: 2022/03/05 19:45:47 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack;
	t_node	*top;
	
	if (argc < 2)
		print_error();
	stack = parse_argv(argv);
	printf("top = %d\n", stack->a_top->value);
	printf("bottom = %d\n", stack->a_bottom->value);
	rra(&stack);
	pb(&stack);
	rra(&stack);
	pb(&stack);
	sa(&stack);
	pb(&stack);
	pb(&stack);
	pa(&stack);
	pa(&stack);
	pa(&stack);
	pa(&stack);
	top = stack->a_top;
	while(stack->a_top)
	{
		printf("%d ", stack->a_top->value);
		stack->a_top = stack->a_top->prev;
	}
	stack->a_top = top;
	printf("\n");
	return (0);
}
