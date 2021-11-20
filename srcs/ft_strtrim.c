/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:43:04 by chsong            #+#    #+#             */
/*   Updated: 2021/11/20 15:04:01 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_lshift(char const *s1, char const *set)
{
	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	return ((char *)s1);
}

static char	*ft_rshift(char const *s1, char const *set)
{
	size_t	r;

	r = ft_strlen(s1);
	while (r > 0 && ft_strchr(set, s1[r]) != NULL)
	{
		r--;
	}
	return ((char *)&s1[r + 1]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	char	*l;
	char	*r;
	int		size;

	l = ft_lshift(s1, set);
	r = ft_rshift(s1, set);
	if (!ft_strlen(l))
		return ("\0");
	size = ft_strlen(l) - ft_strlen(r);
	tmp = (char *)malloc(sizeof(char) * (size + 1));
	if (!tmp)
		return (NULL);
	size = 0;
	while (l != r)
	{
		tmp[size] = *l;
		l++;
		size++;
	}
	tmp[size] = '\0';
	return (tmp);
}
