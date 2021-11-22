/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:54:58 by chsong            #+#    #+#             */
/*   Updated: 2021/11/22 19:00:44 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntstr(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static char	*ft_cutstr(char const **s, char c)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	i = 0;
	while (**s && s[0][i] != c)
		i++;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j < i)
	{
		tmp[j] = **s;
		(*s)++;
		j++;
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
	size_t	size;
	size_t	i;

	if (*s == c || s[ft_strlen(s)] == c)
		s = ft_strtrim((char *)s, &c);
	size = ft_cntstr(s, c);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (s && i < size && *s)
	{
		while (*s == c)
			s++;
		arr[i] = ft_cutstr(&s, c);
		if (!arr[i])
			return (ft_error_free(arr));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
