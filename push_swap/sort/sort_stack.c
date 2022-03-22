/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:11:19 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 14:47:00 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	b_to_a(t_list *stack)
{
	int		cur;
	t_node	*tmp;
	int		position;

	tmp = stack->b_top;
	cur = stack->b_size - 1;
	position = 0;
	while (tmp->value != cur)
	{
		position++;
		tmp = tmp->prev;
	}
	if (stack->b_size / 2 > position)
	{
		while (stack->b_top->value != cur)
			rb(stack);
	}
	else
	{
		while (stack->b_top->value != cur)
			rrb(stack);
	}
	pa(stack);
}

void	sort_stack(t_list *stack)
{
	if (stack->a_size == 2)
		sort_two_node(stack);
	else if (stack->a_size == 3)
		sort_three_node(stack);
	else if (stack->a_size == 5)
		sort_five_node(stack);
	else
	{
		a_to_b(stack);
		while (stack->b_size != 1)
			b_to_a(stack);
		pa(stack);
	}
}
