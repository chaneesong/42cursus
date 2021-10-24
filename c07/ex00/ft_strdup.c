/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:47:38 by chsong            #+#    #+#             */
/*   Updated: 2021/10/24 00:49:25 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
