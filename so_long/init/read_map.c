/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:04:33 by chsong            #+#    #+#             */
/*   Updated: 2022/04/07 11:35:53 by chsong           ###   ########.fr       */
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

static int	get_line(int fd)
{
	int		line;
	char	*str;

	line = 1;
	str = get_next_line(fd);
	free(str);
	while (str)
	{
		str = get_next_line(fd);
		line++;
		free(str);
	}
	close(fd);
	return (line);
}

static void	read_line(char *filename, char **map)
{
	char	*str;
	int		fd;
	int		i;

	fd = open(filename, O_RDONLY);
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
	close(fd);
}

char	**read_map(char *filename)
{
	char	**map;
	int		fd;
	int		line;

	fd = open(filename, O_RDONLY);
	line = get_line(fd);
	close(fd);
	map = (char **)ft_calloc(line, sizeof(char *));
	read_line(filename, map);
	if (check_map_error(map))
	{
		printf("Parsing Error\n");
		system("leaks so_long");
		exit(1);
	}
	return (map);
}
