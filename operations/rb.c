/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:52:43 by chsong            #+#    #+#             */
/*   Updated: 2022/03/05 17:53:21 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stack)
{
	t_node	*top;

	if ((*stack)->b_size < 2)
		return ;
	top = pop_b(stack);
	(*stack)->b_bottom->prev = top;
	top->next = (*stack)->b_bottom->prev;
	(*stack)->b_bottom = top;
}
