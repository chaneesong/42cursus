/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:56:38 by chsong            #+#    #+#             */
/*   Updated: 2022/03/01 20:39:37 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_linkedlist
{
	int				*content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_linkedlist;

int		main(int argc, char *argv[]);
void	parse_argv(char **str);
t_linkedlist	*insert_list(int *number);
void	free_multi_array(char **str);

#endif
