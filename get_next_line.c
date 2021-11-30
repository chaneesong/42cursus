/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:03:38 by chsong            #+#    #+#             */
/*   Updated: 2021/12/01 01:15:41 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strndup(char **dest, char **src, size_t n)
{
	size_t	i;
	*dest = (char *)ft_calloc(sizeof(char), (n + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < n)
	{
		(*dest)[i] = **src;
		i++;
		(*src)++;
	}
	(*dest)[i] = '\0';
	return (i);
}

char	*ft_cut_str(char *s)
{
	char	*tmp;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!tmp)
		return (NULL);
	while(i < len)
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*tmp;
	char		*res;
	size_t		rsize;
	
	if (fd < 0)
		return (NULL);
	tmp = (char *)ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	while (ft_strchr(rest, '\n') == -1 && rsize)
	{
		rsize = read(fd, tmp, BUFFER_SIZE);
		rest = ft_strjoin(rest, tmp);
	}
	if (ft_strchr(rest, '\n') != -1 || !rsize)
	{
		ft_strndup(&res, &rest, ft_strchr(rest, '\n') + 1);
		rest = ft_cut_str(rest);
	}
	free(tmp);
	return (res);
}
