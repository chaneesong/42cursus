#include "../push_swap.h"

void	print_a(t_list *stack)
{
	t_node *tmp;

	tmp = stack->a_top;
	printf("stack A = ");
	while (tmp)
	{
		printf("%d ", tmp->value);
		tmp = tmp->prev;
	}
	printf("\n");
}

void	print_b(t_list *stack)
{
	t_node *tmp;

	tmp = stack->b_top;
	printf("stack B = ");
	while (tmp)
	{
		printf("%d ", tmp->value);
		tmp = tmp->prev;
	}
	printf("\n");
}