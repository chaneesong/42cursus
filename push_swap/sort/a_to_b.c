/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:10:23 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 15:15:38 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	pass_to_b(t_list *stack, int chunk)
{
	int	i;

	i = 0;
	while (stack->a_size)
	{
		if (stack->a_top->value <= i)
		{
			pb(stack);
			i++;
		}
		else if (stack->a_top->value > i && stack->a_top->value <= i + chunk)
		{
			pb(stack);
			rb(stack);
			i++;
		}
		else
			ra(stack);
	}
}

void	a_to_b(t_list *stack)
{
	int	chunk;

	if (stack->a_size < 100)
		chunk = 5;
	else if (stack->a_size >= 100 && stack->a_size < 500)
		chunk = 15;
	else
		chunk = 30;
	pass_to_b(stack, chunk);
}
