/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:29:12 by chsong            #+#    #+#             */
/*   Updated: 2021/11/14 23:40:15 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		join_len;
	int		cnt;

	join_len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (join_len + 1));
	cnt = 0;
	while (*s1)
	{
		tmp[cnt] = *s1;
		s1++;
		cnt++;
	}
	while (*s2)
	{
		tmp[cnt] = *s2;
		s2++;
		cnt++;
	}
	tmp[cnt] = '\0';
	return (tmp);
}