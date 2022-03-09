/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:20:39 by chsong            #+#    #+#             */
/*   Updated: 2022/03/09 16:32:54 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list *stack)
{
	t_node	*node;

	if (stack->a_size == 0)
		return ;
	node = pop_a(stack);
	push_b(stack, node);
	write(1, "pb\n", 3);
}
