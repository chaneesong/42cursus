/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:46:59 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 18:57:18 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate_stack(t_list *stack, int n, int position)
{
	if (stack->a_size / 2 > position)
	{
		while (stack->a_top->value != n)
			ra(stack, 1);
	}
	else
	{
		while (stack->a_top->value != n)
			rra(stack, 1);
	}
}

void	sort_five_node(t_list *stack)
{
	int		n;
	int		position;
	t_node	*node;

	n = 0;
	while (stack->a_size != 3)
	{
		node = stack->a_top;
		position = 0;
		while (node->value != n)
		{
			position++;
			node = node->prev;
		}
		rotate_stack(stack, n, position);
		pb(stack);
		n++;
	}
	sort_three_node(stack);
	while (stack->b_size)
		pa(stack);
}
