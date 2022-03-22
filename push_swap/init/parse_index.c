/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:17:05 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 13:57:49 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_index(int *arr, int cur, int size)
{
	int idx;
	int	i;
	
	i = -1;
	idx = 0;
	while (++i < size)
	{
		if (cur > arr[i])
			idx++;
	}
	return (idx);
}

static void	set_index(t_list *stack, int *arr)
{
	t_node	*node;
	int		i;

	node = stack->a_top;
	i = -1;
	while (++i < stack->a_size)
	{
		node->value = arr[i];
		node = node->prev;
	}
}

void	parse_index(t_list *stack)
{
	int		*value_arr;
	int		*index_arr;
	int		i;
	t_node	*node;

	value_arr = (int *)ft_calloc(sizeof(int), stack->a_size);
	index_arr = (int *)ft_calloc(sizeof(int), stack->a_size);
	node = stack->a_top;
	i = 0;
	while (node)
	{
		value_arr[i] = node->value;
		node = node->prev;
		i++;
	}
	i = -1;
	while (++i < stack->a_size)
		index_arr[i] = check_index(value_arr, value_arr[i], stack->a_size);
	set_index(stack, index_arr);
	free(value_arr);
	free(index_arr);
}
