/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:03:38 by chsong            #+#    #+#             */
/*   Updated: 2021/12/06 17:37:05 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strndup(char const *src, int n)
{
	int		i;
	char	*tmp;

	tmp = (char *)ft_calloc(sizeof(char), n + 2);
	if (!tmp)
		return (NULL);
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
	if (!tmp)
		return (NULL);
	while (ft_strchr(*s, '\n') == -1)
	{
		rsize = read(fd, tmp, BUFFER_SIZE);
		if (!rsize || (int)rsize == -1)
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

void	free_rest(char **rest1, char **rest2)
{
	free(&(*rest1)[0]);
	free(&(*rest2)[0]);
}

char	*get_next_line(int fd)
{
	static char	*rest[111111];
	char		*res;
	char		*tmp;
	int			i;

	if (fd < 0)
		return (NULL);
	tmp = get_str(&rest[fd], fd);
	i = ft_strchr(tmp, '\n');
	if (!tmp)
		return (NULL);
	if (i == -1)
		res = ft_strndup(tmp, ft_strlen(tmp));
	else
		res = ft_strndup(tmp, i);
	rest[fd] = cut_str(&tmp, i);
	if (ft_strchr(res, '\n') == -1)
		free_rest(&rest[fd], &tmp);
	if (!*res)
	{
		free(res);
		return (NULL);
	}
	return (res);
}
