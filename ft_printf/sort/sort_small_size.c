/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 05:31:13 by chsong            #+#    #+#             */
/*   Updated: 2022/03/09 16:32:16 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two_node(t_list *stack)
{
	int	first;
	int	second;

	first = stack->a_top->value;
	second = stack->a_top->prev->value;

	if (first > second)
		sa(stack);
}

void	sort_three_node(t_list *stack)
{
	int	first;
	int	second;
	int	third;

	first = stack->a_top->value;
	second = stack->a_top->prev->value;
	third = stack->a_top->prev->prev->value;
	if (first < second && second > third && third > first)
	{
		sa(stack);
		ra(stack);
	}
	else if (first > second && second < third && third > first)
		sa(stack);
	else if (first < second && second > third && third < first)
		rra(stack);
	else if (first > second && second < third && third < first)
		ra(stack);
	else if (first > second && second > third && third < first)
	{
		sa(stack);
		rra(stack);
	}
}