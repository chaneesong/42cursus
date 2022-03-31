/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:04:33 by chsong            #+#    #+#             */
/*   Updated: 2022/03/31 13:13:38 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**read_map(char *filename)
{
	char	**map;
	char	*str;
	int		fd;
	int		i;

	fd = open(filename, O_RDONLY);
	map = (char **)malloc(sizeof(char *) * 7);
	str = get_next_line(fd);
	map[0] = str;
	i = 1;
	while (str)
	{
		str = get_next_line(fd);
		map[i] = str;
		i++;
	}
	map[i] = (char *)0;
	return (map);
}
