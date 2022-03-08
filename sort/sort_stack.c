/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:40:24 by chsong            #+#    #+#             */
/*   Updated: 2022/03/08 18:24:53 by chsong           ###   ########.fr       */
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
	while((*stack)->b_top->value != index)
		rb(stack);
}

void	sort_stack(t_list **stack)
{
	int	index;
	
	a_to_b(stack);
	while((*stack)->b_top)
	{
		index = find_max_value(stack);
		raise_max_value(stack, index);
		pa(stack);
	}
}
