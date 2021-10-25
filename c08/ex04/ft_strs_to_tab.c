/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:35:36 by chsong            #+#    #+#             */
/*   Updated: 2021/10/25 20:41:58 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*(str + cnt) != '\0')
	{
		cnt++;
	}
	return (cnt);
}

char	*ft_strdup(char *src)
{
	int		cnt;
	char	*src_clone;

	if (!*src)
		return (NULL);
	cnt = 0;
	while (*(src + cnt))
		cnt++;
	src_clone = malloc(sizeof(char) * (cnt + 1));
	cnt = 0;
	while (*(src + cnt))
	{
		*(src_clone + cnt) = *(src + cnt);
		cnt++;
	}
	*(src_clone + cnt) = '\0';
	return (src_clone);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*temp;
	int			cnt;

	temp = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (temp == NULL)
		return (0);
	cnt = 0;
	while (cnt < ac)
	{
		if (*(temp + cnt).str == NULL || *(temp + cnt).copy == NULL)
			return (0);
		*(temp + cnt).size = ft_strlen(*(av + cnt));
		*(temp + cnt).copy = ft_strdup(*(av + cnt));
		*(temp + cnt).str = ft_strdup(*(av + cnt));
		cnt++;
	}
	*(temp + cnt).str = NULL;
	return (temp);
}
