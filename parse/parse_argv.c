/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:44:41 by chsong            #+#    #+#             */
/*   Updated: 2022/03/01 20:36:30 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	parse_argv(char **argv)
{
	char			**split;
	int				index;
	int				number;
	t_linkedlist	*current;
	t_linkedlist	*head;

	index = 1;
	head = (t_linkedlist *)malloc(sizeof(t_linkedlist));
	while (argv && argv[index])
	{
		split = ft_split(argv[index], ' ');
		while (split && *split)
		{
			current = insert_list(ft_atoi(*split));
			split++;
		}
		free_multi_array(split);
		index++;
	}
	// return (head);
}