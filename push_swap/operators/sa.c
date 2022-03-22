/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:38:53 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 18:55:19 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *stack, int check)
{
	t_node	*first;
	t_node	*second;

	first = pop_a_top(stack);
	second = pop_a_top(stack);
	push_a_top(stack, first);
	push_a_top(stack, second);
	print_operator("sa", check);
}
