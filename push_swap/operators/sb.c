/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:44:10 by chsong            #+#    #+#             */
/*   Updated: 2022/03/21 14:36:54 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list *stack)
{
	t_node	*first;
	t_node	*second;

	first = pop_b_top(stack);
	second = pop_b_top(stack);
	push_b_top(stack, first);
	push_b_top(stack, second);
	write(1, "sb\n", 3);
}
