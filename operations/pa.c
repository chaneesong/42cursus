/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:07:41 by chsong            #+#    #+#             */
/*   Updated: 2022/03/08 14:37:42 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **stack)
{
	t_node	*node;

	if ((*stack)->b_size == 0)
		return ;
	node = pop_b(stack);
	push_a(stack, node);
	write(1, "pa\n", 3);
}
