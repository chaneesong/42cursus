/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:40:02 by chsong            #+#    #+#             */
/*   Updated: 2022/03/01 19:46:40 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_linkedlist	*insert_list(int *number)
{
	t_linkedlist	*new;

	new = (t_linkedlist *)malloc(sizeof(t_linkedlist));
	new->content = number;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}