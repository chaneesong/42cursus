/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:04:33 by chsong            #+#    #+#             */
/*   Updated: 2022/04/01 18:10:57 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	check_map_error(char **map)
{
	if (check_other_item(map))
		return (1);
	if (check_rectangle(map))
		return (1);
	if (check_side_wall(map))
		return (1);
	if (check_item(map, 'C'))
		return (1);
	if (check_item(map, 'E'))
		return (1);
	if (check_player(map))
		return (1);
	return (0);
}

char	**read_map(char *filename)
{
	char	**map;
	char	*str;
	int		fd;
	int		i;

	fd = open(filename, O_RDONLY);
	map = (char **)ft_calloc(7, sizeof(char *));
	str = get_next_line(fd);
	map[0] = str;
	i = 1;
	while (str)
	{
		str = get_next_line(fd);
		map[i] = str;
		i++;
	}
	map[i] = NULL;
	if (check_map_error(map))
		exit(1);
	return (map);
}
