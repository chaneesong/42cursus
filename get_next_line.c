/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:03:38 by chsong            #+#    #+#             */
/*   Updated: 2021/12/03 22:35:07 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_strndup(char const *src, int n)
{
	int		i;
	char	*tmp;

	tmp = (char *)ft_calloc(sizeof(char), n + 2);
	i = 0;
	while (i < n + 1)
	{
		tmp[i] = src[i];
		i++;
	}
	return (tmp);
}

static char	*get_str(char **s, int fd)
{
	char	*tmp;
	char	*res;
	size_t	rsize;

	tmp = (char *)ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	while (ft_strchr(*s, '\n') == -1)
	{
		rsize = read(fd, tmp, BUFFER_SIZE);
		if (!rsize)
			break ;
		*s = ft_strjoin(s, tmp);
		ft_memset(tmp, 0, ft_strlen(tmp));
	}
	res = *s;
	free(tmp);
	return (res);
}

static char	*cut_str(char **s, int n)
{
	char	*tmp;
	int		len;
	int		i;

	if (n == -1)
		return (NULL);
	len = ft_strlen(*s);
	tmp = (char *)ft_calloc(len - n + 1, sizeof(char));
	i = 0;
	while (i + n + 1 < len)
	{
		tmp[i] = (*s)[i + n + 1];
		i++;
	}
	free(&(*s)[0]);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*res;
	char		*tmp;
	int			i;

	if (fd < 2)
		return (NULL);
	tmp = get_str(&rest, fd);
	i = ft_strchr(tmp, '\n');
	if (!tmp)
		return (NULL);
	if (i == -1)
		res = ft_strndup(tmp, ft_strlen(tmp));
	else
		res = ft_strndup(tmp, i);
	rest = cut_str(&tmp, i);
	if (!*res)
	{
		free(res);
		return (NULL);
	}
	return (res);
}
