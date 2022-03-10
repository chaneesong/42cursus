/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:58:22 by chsong            #+#    #+#             */
/*   Updated: 2022/03/10 23:09:19 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	raise_current_size_b(t_list *stack, int value)
{
	int		size;
	t_node	*tmp;

	size = 0;
	tmp = stack->b_top;
	while (tmp->value != value)
	{
		size++;
		tmp = tmp->prev;
	}
	if (stack->b_size - size < stack->b_size / 2)
		return (-(stack->b_size - size));
	return (size);
}

static int	raise_current_size_a(t_list *stack, int value)
{
	int		size;
	t_node	*tmp;

	size = 0;
	tmp = stack->a_top;
	while (tmp->prev && tmp->prev->value < value)
	{
		size++;
		tmp = tmp->prev;
	}
	if (stack->a_size - size < stack->a_size / 2)
		return (-(stack->a_size - size));
	return (size);
}

static int	up_sign(int value)
{
	if (value < 0)
		return (-value);
	return (value);
}

static void	push_correct_seat(t_list *stack, int a, int b)
{
	if (a < 0)
	{
		while (a != 0)
		{
			rra(stack);
			a++;
		}
	}
	else if (a > 0)
	{
		while (a != 0)
		{
			printf("%d\n", a);
			ra(stack);
			a--;
		}
	}
	if (b < 0)
	{
		while (b != 0)
		{
			rrb(stack);
			b++;
		}
	}
	else if (b > 0)
	{
		while(b != 0)
		{
			rb(stack);
			b--;
		}
	}
	pa(stack);
}

void	sort_big_size(t_list *stack)
{
	t_node	*current;
	int		cur_a;
	int		min_a;
	int		cur_b;
	int		min_b;

	pa(stack);
	min_a = 500;
	min_b = 500;
	current = stack->b_top;
	while(current)
	{
		if (current->value > stack->second)
		{
			cur_b = raise_current_size_b(stack, current->value);
			cur_a = raise_current_size_a(stack, current->value);
		}
		if (up_sign(min_a) + up_sign(min_b) > up_sign(cur_a) + up_sign(cur_b))
		{
			min_a = cur_a;
			min_b = cur_b;
		}
		current = current->prev;
	}
	push_correct_seat(stack, min_a, min_b);
}
