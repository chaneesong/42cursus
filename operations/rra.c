/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:50:38 by chsong            #+#    #+#             */
/*   Updated: 2022/03/05 19:45:01 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack)
{
	t_node	*bottom;

	bottom = (*stack)->a_bottom;
	(*stack)->a_bottom = (*stack)->a_bottom->next;
	(*stack)->a_bottom->prev = NULL;
	bottom->next = NULL;
	(*stack)->a_size--;
	push_a(stack, bottom);
}
