/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:44:41 by chsong            #+#    #+#             */
/*   Updated: 2022/03/01 19:54:01 by chsong           ###   ########.fr       */
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
	while (argv && argv[index])
	{
		split = ft_split(argv[index], ' ');
		while (split && *split)
		{
			current = insert_list(ft_atoi(*split));
			split++;
		}
		index++;
	}
	// return (head);
}