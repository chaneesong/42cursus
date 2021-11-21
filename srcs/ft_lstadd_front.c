/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:09:11 by chsong            #+#    #+#             */
/*   Updated: 2021/11/21 16:12:10 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	**tmp;

	tmp = lst;
	if (!lst)
		lst = (t_list **)malloc(sizeof(t_list *));
	if (!new)
		new = ft_lstnew(NULL);
	new->next = *tmp;
	*lst = new;
}
