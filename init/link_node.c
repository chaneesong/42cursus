/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:32:30 by chsong            #+#    #+#             */
/*   Updated: 2022/03/03 15:59:12 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	link_node(t_node **init, t_node *current)
{
	if (!*init)
	{
		*init = current;
		return ;
	}
	(*init)->next = current;
	current->prev = *init;
	(*init) = current;
}
