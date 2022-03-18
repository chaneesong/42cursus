/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:04:41 by chsong            #+#    #+#             */
/*   Updated: 2022/03/18 19:56:19 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_same_node(t_stack *a, int value)
{
	t_node	*tmp;

	tmp = a->bottom;
	while (tmp)
	{
		if (tmp->value == value)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	init_push(t_stack *a, int value)
{
	t_node	*node;

	node = (t_node *)ft_calloc(1, sizeof(t_node));
	node->value = value;
	if (a->size == 0)
	{
		a->top = node;
		a->bottom = node;
		a->size++;
		return ;
	}
	if (check_same_node(a, value))
		exit(-2);
	node->next = a->bottom;
	a->bottom->prev = node;
	a->bottom = node;
	a->size++;
}
