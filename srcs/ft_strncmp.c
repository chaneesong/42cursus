/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:33:17 by chsong            #+#    #+#             */
/*   Updated: 2021/11/14 21:25:53 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	cnt = 0;
	while (cnt < n - 1 && tmp1[cnt] == tmp2[cnt] && tmp1[cnt])
	{
		if (tmp1[cnt] != tmp2[cnt])
			break ;
		cnt++;
	}
	return (tmp1[cnt] - tmp2[cnt]);
}