/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:54:17 by chsong            #+#    #+#             */
/*   Updated: 2022/03/11 17:16:35 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list *stack)
{
	t_node	*bottom;

	bottom = stack->b_bottom;
	stack->b_bottom = stack->b_bottom->next;
	stack->b_bottom->prev = NULL;
	bottom->next = NULL;
	stack->b_size--;
	push_b(stack, bottom);
	// write(1, "rrb\n", 4);
}
