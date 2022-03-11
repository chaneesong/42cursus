/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:40:24 by chsong            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/03/11 17:18:01 by chsong           ###   ########.fr       */
=======
/*   Updated: 2022/03/10 23:08:24 by chsong           ###   ########.fr       */
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e
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
	while (stack->a_size != 3)
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
<<<<<<< HEAD
		sort_three_node(stack);
		sort_big_size(stack);
=======
		while (stack->b_size != 11)
			sort_big_size(stack);
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e
	}
}
