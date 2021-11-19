/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:37:38 by chsong            #+#    #+#             */
/*   Updated: 2021/11/19 20:32:57 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (void *)malloc(size * count);
	if (!tmp)
		return (NULL);
	i = 0;
	ft_memset(tmp, 0, count * size);
	return (tmp);
}
