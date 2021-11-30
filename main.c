/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:32:34 by chsong            #+#    #+#             */
/*   Updated: 2021/12/01 00:33:10 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	buf[10];
	int		tmp;

	fd = open("test.txt", O_RDONLY, 444);
	for(int i = 0; i < 6; i++)
		printf("res=%s\n", get_next_line(fd));

	close(fd);
	return (0);
}