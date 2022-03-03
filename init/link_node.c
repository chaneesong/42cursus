/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:05:48 by chsong            #+#    #+#             */
/*   Updated: 2022/03/03 15:00:37 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_stack(t_node **stack, t_node *current)
{
	if (!*stack)
	{
		*stack = current;
		return ;
	}
	(*stack)->next = current;
	current->prev = *stack;
	*stack = (*stack)->next;
}
