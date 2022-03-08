/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:52:43 by chsong            #+#    #+#             */
/*   Updated: 2022/03/08 18:24:12 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stack)
{
	t_node	*currnet;

	if ((*stack)->b_size < 2)
		return ;
	currnet = pop_b(stack);
	(*stack)->b_bottom->prev = currnet;
	currnet->next = (*stack)->b_bottom;
	(*stack)->b_bottom = currnet;
	(*stack)->b_size++;
	write(1, "rb\n", 3);
}
