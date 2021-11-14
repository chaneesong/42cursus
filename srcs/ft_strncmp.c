/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:33:17 by chsong            #+#    #+#             */
/*   Updated: 2021/11/14 18:17:30 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;

	if (n == 0)
		return (0);
	cnt = 0;
	while (cnt < n - 1 && s1[cnt] == s2[cnt] && s1[cnt])
	{
		if (s1[cnt] != s2[cnt])
			break ;
		cnt++;
	}
	return (s1[cnt] - s2[cnt]);
}
