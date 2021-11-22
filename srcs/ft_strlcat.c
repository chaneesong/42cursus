/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:12:25 by chsong            #+#    #+#             */
/*   Updated: 2021/11/22 23:48:45 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_cnt;
	size_t	dst_cnt;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	src_cnt = 0;
	dst_cnt = ft_strlen(dst);
	while (*(src + src_cnt) && dst_cnt + 1 < dstsize)
	{
		*(dst + dst_cnt) = *(src + src_cnt);
		dst_cnt++;
		src_cnt++;
	}
	*(dst + dst_cnt) = '\0';
	return (ft_strlen(dst) + ft_strlen(src + src_cnt));
}
