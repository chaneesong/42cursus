/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:54:58 by chsong            #+#    #+#             */
/*   Updated: 2022/03/23 13:32:57 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_get_size(char const *s, char c)
{
	size_t	res;
	size_t	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (res);
		res++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (res);
}

char	*ft_cutstr(char const **s, char c)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	i = 0;
	while (s[0][i] && s[0][i] != c)
		i++;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	while (**s && **s != c)
	{
		tmp[j] = **s;
		j++;
		(*s)++;
	}
	tmp[j] = '\0';
	return (tmp);
}

static char	**ft_error_free(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_get_size(s, c);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	i = 0;
	while (*s && i < size)
	{
		while (*s && *s == c)
			s++;
		arr[i] = ft_cutstr(&s, c);
		if (arr[i] == NULL)
			return (ft_error_free(arr));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
