/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:59:11 by chsong            #+#    #+#             */
/*   Updated: 2022/03/21 17:02:22 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_b_value(t_list *stack, int size)
{
	t_node	*tmp;

	tmp = stack->b_top;
	while (size)
	{
		tmp = tmp->prev;
		size--;
	}
	return (tmp->value);
}

static int	find_a_position(t_list *stack, int b_value)
{
	int		size;
	t_node	*tmp;

	tmp = stack->a_top;
	size = 0;
	while (stack->a_size > 2 && tmp->prev)
	{
		if (b_value < tmp->value && b_value < tmp->prev->value)
			return (size);
		size++;
	}
}

void	b_to_a(t_list *stack)
{
	int	a;
	int	b;
	int	min;

	b = 0;
	while (stack->b_size)
	{
		a = find_a_position(stack, find_b_value(stack, b));
		set_a_b(stack, &a, &b);
		if (min > a + b)
			min = a + b;
		rotate_a_b(stack, a, b);
		b++;
	}
}
