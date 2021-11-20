/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:54:58 by chsong            #+#    #+#             */
/*   Updated: 2021/11/20 15:43:19 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cntchr(char const *s, char c)
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

static size_t	ft_tofind(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_cutstr(char const **s, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (n + 1));
	if (!tmp)
		return (NULL);
	while (i < n)
	{
		tmp[i] = **s;
		(*s)++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

static char	**ft_arr_free(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i]);
	free(arr);
	return (NULL);
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
	if (!arr)
		return (NULL);
	i = 0;
	while (*s && i < size)
	{
		while (*s && *s == c)
			s++;
		k = ft_tofind(s, c);
		arr[i] = ft_cutstr(&s, k);
		if (!arr[i])
			return (ft_arr_free(arr));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
