/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:40:24 by chsong            #+#    #+#             */
/*   Updated: 2022/03/10 23:08:24 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	divide_into_three(t_list *stack)
{
	int		cycle;

	cycle = -1;
	while (++cycle < stack->a_size + stack->b_size)
	{
		if (stack->a_top->value < stack->second)
		{
			pb(stack);
			if (stack->b_top->value <= stack->first)
				rb(stack);
		}
		else
			ra(stack);
	}
	while (stack->a_top)
		pb(stack);
}

void	sort_stack(t_list *stack)
{
	find_pivot(stack);
	if (stack->a_size == 2)
		sort_two_node(stack);
	else if (stack->a_size == 3)
		sort_three_node(stack);
	else
	{
		divide_into_three(stack);
		while (stack->b_size != 11)
			sort_big_size(stack);
	}
}
