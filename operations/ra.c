/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:48:26 by chsong            #+#    #+#             */
/*   Updated: 2022/03/08 14:37:56 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack)
{
	t_node	*top;

	if ((*stack)->a_size < 2)
		return ;
	top = pop_a(stack);
	(*stack)->a_bottom->prev = top;
	top->next = (*stack)->a_bottom->prev;
	(*stack)->a_bottom = top;
	write(1, "ra\n", 3);
}
