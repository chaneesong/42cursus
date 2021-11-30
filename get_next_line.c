/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:03:38 by chsong            #+#    #+#             */
/*   Updated: 2021/11/30 21:13:13 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>



char	*get_next_line(int fd)
{
	static char	*rest;
	char		*tmp;
	size_t		rsize;
	
	tmp = (char *)ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	rsize = read(fd, tmp, BUFFER_SIZE);
	while (rsize)
	{
		rest = ft_strjoin(rest, tmp);
		ft_memset(tmp, 0, BUFFER_SIZE + 1);
		rsize = read(fd, tmp, BUFFER_SIZE);
	}
	printf("rest=%s\n", rest);
	if (ft_strchr(rest, '\n'))
		rest[ft_strchr(rest, '\n')] = '1';
	free(tmp);
	return (NULL);
}
