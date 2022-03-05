/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:34:45 by chsong            #+#    #+#             */
/*   Updated: 2022/03/05 19:16:53 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stack)
{
	t_node	*first;
	t_node	*second;

	if ((*stack)->a_size < 2)
		return ;
	first = pop_a(stack);
	second = pop_a(stack);
	push_a(stack, first);
	push_a(stack, second);
}
