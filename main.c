/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:32:34 by chsong            #+#    #+#             */
/*   Updated: 2021/12/04 01:15:12 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*res;
	fd = open("test.txt", O_RDONLY, 444);
	for(int i = 0; i < 6; i++)
	{
		// get_next_line(fd);
		res = get_next_line(fd);
		printf("res=%s\n", res);
		if (res)
			free(res);
	}
	close(fd);
	while (1)
		continue ;
	return (0);
}