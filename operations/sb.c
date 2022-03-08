/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:38:19 by chsong            #+#    #+#             */
/*   Updated: 2022/03/08 14:38:46 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list **stack)
{
	t_node	*first;
	t_node	*second;

	if ((*stack)->b_size < 2)
		return ;
	first = pop_b(stack);
	second = pop_b(stack);
	push_b(stack, first);
	push_b(stack, second);
	write(1, "sb\n", 3);
}
