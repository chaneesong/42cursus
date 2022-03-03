/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:23:30 by chsong            #+#    #+#             */
/*   Updated: 2022/03/03 15:17:03 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*link_node(t_node **stack)
{
	t_node	*current;

	current = *stack;
	*stack = (*stack)->prev;
	(*stack)->next = NULL;
	current->prev = NULL;
	return (current);
}
