/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:54:58 by chsong            #+#    #+#             */
/*   Updated: 2021/11/19 17:16:44 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_cntchr(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			res++;
		while (s[i] && s[i] == c)
			i++;
		i++;
	}
	return (res);
}

size_t	ft_tofind(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*ft_cutstr(char const **s, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (n + 1));
	while (i < n)
	{
		tmp[i] = **s;
		(*s)++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	i;
	size_t	k;

	s = ft_strtrim(s, &c);
	size = ft_cntchr(s, c) + 1;
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	i = 0;
	while (*s && i < size)
	{
		while (*s && *s == c)
			s++;
		k = ft_tofind(s, c);
		arr[i] = ft_cutstr(&s, k);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
