/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:25:38 by chsong            #+#    #+#             */
/*   Updated: 2022/01/04 15:24:20 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int  find_format(const char c)
{
	if (ft_strchr("cspdiuxx%", c))
		return (1);
	return (0);
}

char	*copy_target(const char **str)
{
	size_t	size;
	char	*tmp;

	size = 0;
	while (*str && **str && !find_format((*str)[size]))
		size++;
	size++;
	tmp = (char *)malloc(sizeof(char) * (size + 1));
	ft_strlcpy(tmp, *str, size + 1);
	(*str) += size;
	return (tmp);
}