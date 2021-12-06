/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:32:34 by chsong            #+#    #+#             */
/*   Updated: 2021/12/06 17:34:18 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include "get_next_line_bonus.h"

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*res1;
	char	*res2;
	fd1 = open("test.txt", O_RDONLY, 444);
	fd2 = open("test2.txt", O_RDONLY, 444);
	for(int i = 0; i < 6; i++)
	{
		res1 = get_next_line(fd1);
		printf("res1=%s\n", res1);
		res2 = get_next_line(fd2);
		printf("res2=%s\n", res2);
		free(res1);
		free(res2);
	}
	close(fd1);
	close(fd2);
	return (0);
}