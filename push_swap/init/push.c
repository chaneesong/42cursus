/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:06:17 by chsong            #+#    #+#             */
/*   Updated: 2022/03/20 13:13:41 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a_top(t_list *stack, t_node *node)
{
	if (!node)
		return ;
	if (stack->a_size == 0)
	{
		stack->a_top = node;
		stack->a_bottom = node;
		stack->a_size++;
		return ;
	}
	stack->a_top->next = node;
	node->prev = stack->a_top;
	stack->a_top = node;
	stack->a_size++;
}

void	push_b_top(t_list *stack, t_node *node)
{
	if (!node)
		return ;
	if (stack->b_size == 0)
	{
		stack->b_top = node;
		stack->b_bottom = node;
		stack->b_size++;
		return ;
	}
	stack->b_top->next = node;
	node->prev = stack->b_top;
	stack->b_top = node;
	stack->b_size++;
}

void	push_a_bottom(t_list *stack, t_node *node)
{
	if (!node)
		return ;
	if (stack->a_size == 0)
	{
		stack->a_top = node;
		stack->a_bottom = node;
		stack->a_size++;
		return ;
	}
	stack->a_bottom->prev = node;
	node->next = stack->a_bottom;
	stack->a_bottom = node;
	stack->a_size++;
}

void	push_b_bottom(t_list *stack, t_node *node)
{
	if (!node)
		return ;
	if (stack->b_size == 0)
	{
		stack->b_top = node;
		stack->b_bottom = node;
		stack->b_size++;
		return ;
	}
	stack->b_bottom->prev = node;
	node->next = stack->b_bottom;
	stack->b_bottom = node;
	stack->b_size++;
}