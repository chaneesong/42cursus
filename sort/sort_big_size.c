/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:12:20 by chsong            #+#    #+#             */
/*   Updated: 2022/03/11 17:09:55 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	current_b_location(t_list *stack, t_node *current)
{
	int		size;
	t_node	*tmp;

	size = 0;
	tmp = stack->b_top;
	while (tmp->value != current->value)
	{
		size++;
		tmp = tmp->prev;
	}
	return (return_value(stack->b_size, size));
}

static int	current_a_location(t_list *stack, t_node *current)
{
	if (stack->a_top->value < current->value)
		return (low_value(stack, current));
	else
		return (high_value(stack, current));
}

static void	rotate_a(t_list *stack, int size)
{
	if (size < 0)
	{
		while (size)
		{
			rra(stack);
			size++;
		}
	}
	else if (size > 0)
	{
		while (size)
		{
			ra(stack);
			size--;
		}
	}
}

static void	rotate_b(t_list *stack, int size)
{
	if (size < 0)
	{
		while (size)
		{
			rrb(stack);
			size++;
		}
	}
	else if (size > 0)
	{
		while (size)
		{
			rb(stack);
			size--;
		}
	}
}

void	sort_big_size(t_list *stack)
{
	int		cur_a;
	int		cur_b;
	t_node	*tmp;
	int		res_a;
	int		res_b;
	t_node	*tmp2;

	pa(stack);
	while(stack->b_size)
	{
		tmp = stack->b_top;
		while (tmp)
		{
			cur_b = current_b_location(stack, tmp);
			cur_a = current_a_location(stack, tmp);
			if (tmp->value == stack->b_top->value ||
				upsign(res_a) + upsign(res_b) > upsign(cur_a) + upsign(cur_b))
			{
				res_a = cur_a;
				res_b = cur_b;
			}
			tmp = tmp->prev;
		}
		printf("res a = %d // res b = %d\n", res_a, res_b);
		tmp2 = stack->a_top;
		printf("stack A = ");
		while(tmp2)
		{
			printf("%d ", tmp2->value);
			tmp2 = tmp2->prev;
		}
		printf("\n");
		tmp2 = stack->b_top;
		printf("stack B = ");
		while(tmp2)
		{
			printf("%d ", tmp2->value);
			tmp2 = tmp2->prev;
		}
		printf("\n");
		rotate_a(stack, res_a);
		rotate_b(stack, res_b);
		pa(stack);
	}
}
