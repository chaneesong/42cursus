/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/03/11 13:12:20 by chsong            #+#    #+#             */
/*   Updated: 2022/03/11 18:02:09 by chsong           ###   ########.fr       */
=======
/*   Created: 2022/03/10 21:58:22 by chsong            #+#    #+#             */
/*   Updated: 2022/03/10 23:09:19 by chsong           ###   ########.fr       */
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

<<<<<<< HEAD
static int	current_b_location(t_list *stack, t_node *current)
=======
static int	raise_current_size_b(t_list *stack, int value)
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e
{
	int		size;
	t_node	*tmp;

	size = 0;
	tmp = stack->b_top;
<<<<<<< HEAD
	while (tmp->value != current->value)
=======
	while (tmp->value != value)
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e
	{
		size++;
		tmp = tmp->prev;
	}
<<<<<<< HEAD
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
=======
	if (stack->b_size - size < stack->b_size / 2)
		return (-(stack->b_size - size));
	return (size);
}

static int	raise_current_size_a(t_list *stack, int value)
{
	int		size;
	t_node	*tmp;

	size = 0;
	tmp = stack->a_top;
	while (tmp->prev && tmp->prev->value < value)
	{
		size++;
		tmp = tmp->prev;
	}
	if (stack->a_size - size < stack->a_size / 2)
		return (-(stack->a_size - size));
	return (size);
}

static int	up_sign(int value)
{
	if (value < 0)
		return (-value);
	return (value);
}

static void	push_correct_seat(t_list *stack, int a, int b)
{
	if (a < 0)
	{
		while (a != 0)
		{
			rra(stack);
			a++;
		}
	}
	else if (a > 0)
	{
		while (a != 0)
		{
			printf("%d\n", a);
			ra(stack);
			a--;
		}
	}
	if (b < 0)
	{
		while (b != 0)
		{
			rrb(stack);
			b++;
		}
	}
	else if (b > 0)
	{
		while(b != 0)
		{
			rb(stack);
			b--;
		}
	}
	pa(stack);
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e
}

void	sort_big_size(t_list *stack)
{
<<<<<<< HEAD
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
=======
	t_node	*current;
	int		cur_a;
	int		min_a;
	int		cur_b;
	int		min_b;

	pa(stack);
	min_a = 500;
	min_b = 500;
	current = stack->b_top;
	while(current)
	{
		if (current->value > stack->second)
		{
			cur_b = raise_current_size_b(stack, current->value);
			cur_a = raise_current_size_a(stack, current->value);
		}
		if (up_sign(min_a) + up_sign(min_b) > up_sign(cur_a) + up_sign(cur_b))
		{
			min_a = cur_a;
			min_b = cur_b;
		}
		current = current->prev;
	}
	push_correct_seat(stack, min_a, min_b);
>>>>>>> 0b7f38403b93443ad4645eb842c1901aaa5ebb4e
}
