/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:25:41 by chsong            #+#    #+#             */
/*   Updated: 2022/03/11 17:03:44 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	upsign(int value)
{
	if(value < 0)
		return (-value);
	return (value);
}

int	return_value(int total, int cur_size)
{
	if (total - cur_size < total / 2)
		return (-(total - cur_size));
	return (cur_size);
}

int	low_value(t_list *stack, t_node *current)
{
	int		size;
	t_node	*tmp;

	if (!stack->a_size)
		return (0);
	tmp = stack->a_top;
	size = 0;
	while (tmp && tmp->value < current->value)
	{
		size++;
		tmp = tmp->prev;
	}
	return (return_value(stack->a_size, size));
}

int	high_value(t_list *stack, t_node *current)
{
	int		size;
	t_node	*tmp;
	
	if (!stack->a_size)
		return (0);
	tmp = stack->a_bottom;
	size = 0;
	while (tmp && tmp->value < current->value)
	{
		size++;
		tmp = tmp->next;
	}
	return (return_value(stack->a_size, size));
}
