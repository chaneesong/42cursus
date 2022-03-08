/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:40:24 by chsong            #+#    #+#             */
/*   Updated: 2022/03/09 05:54:20 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	a_to_b(t_list **stack)
{
	while((*stack)->a_top)
		pb(stack);
}

static int	find_max_value(t_list **stack)
{
	int		max_value;
	t_node	*tmp;

	tmp = (*stack)->b_top;
	max_value = (*stack)->b_top->value;
	(*stack)->b_top = (*stack)->b_top->prev;
	while((*stack)->b_top)
	{
		if (max_value < (*stack)->b_top->value)
			max_value = (*stack)->b_top->value;
		(*stack)->b_top = (*stack)->b_top->prev;
	}
	(*stack)->b_top = tmp;
	return (max_value);	
}

static void	raise_max_value(t_list **stack, int index)
{
	int		current;
	t_node	*top;

	current = 0;
	top = (*stack)->b_top;
	while((*stack)->b_top->value != index)
	{
		current++;
		(*stack)->b_top = (*stack)->b_top->prev;
	}
	(*stack)->b_top = top;
	if ((*stack)->b_size - current > (*stack)->b_size / 2)
	{
		while (current)
		{
			current--;
			rb(stack);
		}
	}
	else
	{
		current = (*stack)->b_size - current;
		while (current)
		{
			current--;
			rrb(stack);
		}
	}
}

void	sort_stack(t_list **stack)
{
	int	index;
	
	if ((*stack)->a_size == 2)
		sort_two_node(stack);
	else if ((*stack)->a_size == 3)
		sort_three_node(stack);
	else
	{
		a_to_b(stack);
		while((*stack)->b_top)
		{
			index = find_max_value(stack);
			raise_max_value(stack, index);
			pa(stack);
		}
	}
}
