/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:49:45 by chsong            #+#    #+#             */
/*   Updated: 2022/03/03 16:01:23 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stack(t_list **stack, t_node *init)
{
	int	size;

	(*stack)->top = init;
	size = 0;
	while(init->prev)
	{
		init = init->prev;
		size++;
	}
	(*stack)->bottom = init;
	(*stack)->size = ++size;
}
