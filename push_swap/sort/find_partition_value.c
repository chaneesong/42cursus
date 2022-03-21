/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_partition_value.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:31:58 by chsong            #+#    #+#             */
/*   Updated: 2022/03/21 15:30:17 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_array(int *arr, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}

void	find_partition_value(t_list *stack)
{
	int		*arr;
	t_node	*tmp;

	arr = (int *)ft_calloc(sizeof(int), stack->a_size + 1);
	tmp = stack->a_top;
	while(stack->a_top)
	{
		*arr = stack->a_top->value;
		arr++;
		stack->a_top = stack->a_top->prev;
	}
	arr -= stack->a_size;
	sort_array(arr, stack->a_size);
	stack->part1 = arr[stack->a_size / 3];
	stack->part2 = arr[stack->a_size * 2 / 3];
	stack->a_top = tmp;
	free(arr);
}
