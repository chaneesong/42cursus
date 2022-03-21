/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:38:57 by chsong            #+#    #+#             */
/*   Updated: 2022/03/21 15:59:27 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_to_b(t_list *stack)
{
	int	size;

	size = -1;
	while (++size != stack->a_size + stack->b_size)
	{
		if (stack->a_top->value > stack->part2)
			ra(stack);
		else if (stack->a_top->value > stack->part1 &&
				stack->a_top->value <= stack->part2)
			pb(stack);
		else
		{
			pb(stack);
			rb(stack);
		}
	}
	while (stack->a_size)
		pb(stack);
}
