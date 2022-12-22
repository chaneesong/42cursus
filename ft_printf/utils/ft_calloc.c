/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:21:13 by chsong            #+#    #+#             */
/*   Updated: 2022/03/03 16:21:28 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*res;

	res = b;
	while (len--)
		*res++ = (unsigned char)c;
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = (void *)malloc(size * count);
	if (!tmp)
		return (NULL);
	tmp = ft_memset(tmp, 0, size * count);
	return (tmp);
}
