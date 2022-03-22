/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:44:10 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 18:55:40 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list *stack, int check)
{
	t_node	*first;
	t_node	*second;

	first = pop_b_top(stack);
	second = pop_b_top(stack);
	push_b_top(stack, first);
	push_b_top(stack, second);
	print_operator("sb", check);
}
