/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:48:26 by chsong            #+#    #+#             */
/*   Updated: 2022/03/09 16:33:10 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list *stack)
{
	t_node	*currnet;

	if (stack->a_size < 2)
		return ;
	currnet = pop_a(stack);
	stack->a_bottom->prev = currnet;
	currnet->next = stack->a_bottom;
	stack->a_bottom = currnet;
	stack->a_size++;
	write(1, "ra\n", 3);
}
