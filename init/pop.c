/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:09:28 by chsong            #+#    #+#             */
/*   Updated: 2022/03/05 16:31:19 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*pop_a(t_list **stack)
{
	t_node	*node;
	
	if ((*stack)->a_size == 0)
		return (NULL);
	node = (t_node *)malloc(sizeof(t_node));
	if ((*stack)->a_size == 1)
	{
		node = (*stack)->a_top;
		(*stack)->a_top = NULL;
		(*stack)->a_bottom = NULL;
		(*stack)->a_size--;
		return (node);
	}
	node = (*stack)->a_top;
	(*stack)->a_top = (*stack)->a_top->prev;
	(*stack)->a_top->next = NULL;
	node->prev = NULL;
	(*stack)->a_size--;
	return (node);
}

t_node	*pop_b(t_list **stack)
{
	t_node	*node;
	
	if ((*stack)->b_size == 0)
		return (NULL);
	node = (t_node *)malloc(sizeof(t_node));
	if ((*stack)->b_size == 1)
	{
		node = (*stack)->b_top;
		(*stack)->b_top = NULL;
		(*stack)->b_bottom = NULL;
		(*stack)->b_size--;
		return (node);
	}
	node = (*stack)->b_top;
	(*stack)->b_top = (*stack)->b_top->prev;
	(*stack)->b_top->next = NULL;
	node->prev = NULL;
	(*stack)->b_size--;
	return (node);
}
