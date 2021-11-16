/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:54:58 by chsong            #+#    #+#             */
/*   Updated: 2021/11/16 18:28:49 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cntchr(char const *s, char c)
{
	size_t	i;
	int		res;

	i = ft_strlen(s);
	res = 0;
	while (i--)
	{
		if (s[i] == c)
			res++;
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
	size_t tmp;

	s = ft_strtrim(s, &c);
	size = ft_cntchr(s, c) + 1;
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	i = 0;
	while (i < size)
	{
		arr[i] = (char *)malloc(sizeof(char) * ft_tofind(s, c) + 1);
		tmp = ft_strlcpy(arr[i], s, ft_tofind(s, c) + 1);
		s += ft_tofind(s, c) + 1;
		
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
