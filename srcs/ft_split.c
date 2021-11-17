/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:54:58 by chsong            #+#    #+#             */
/*   Updated: 2021/11/17 00:33:41 by chsong           ###   ########.fr       */
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

size_t	ft_tofind(char const * s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	i;
	size_t	j;

	size = ft_cntchr(s, c) + 1;
	arr = (char **)malloc(sizeof(char *) * ft_strlen(s) + 1);
	i = 0;
	while (*s && i < size)
	{
		j = 0;
		while (*s && *s == c)
			s++;
		if (!*s)
			break;
		size = ft_tofind(s, c);
		arr[i] = (char *)malloc(sizeof(char) * (size + 1));
		while (j < size)
		{
			arr[i][j] = *s;
			s++;
			j++;
		}
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
