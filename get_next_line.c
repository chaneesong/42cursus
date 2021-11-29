/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:03:38 by chsong            #+#    #+#             */
/*   Updated: 2021/11/29 20:32:11 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <string.h>
char	*get_next_line(int fd)
{
	static char	*buf;
	char		*tmp;

	tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	read(fd, tmp, BUFFER_SIZE);
	if (!strchr(tmp, '\n'))
		

	return (buf);
}
