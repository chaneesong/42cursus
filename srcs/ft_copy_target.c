/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_target.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:25:38 by chsong            #+#    #+#             */
/*   Updated: 2022/01/14 09:21:57 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int  ft_find_format(const char c)
{
	if (ft_strchr("cspdiuxX%", c))
		return (1);
	return (0);
}

char	*ft_copy_target(const char **str)
{
	size_t	size;
	char	*tmp;

	size = 0;
	while (*str && **str && !ft_find_format((*str)[size]))
		size++;
	size++;
	tmp = (char *)malloc(sizeof(char) * (size + 1));
	ft_strlcpy(tmp, *str, size + 1);
	(*str) += size;
	return (tmp);
}
