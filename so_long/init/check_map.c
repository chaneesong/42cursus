/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:46:14 by chsong            #+#    #+#             */
/*   Updated: 2022/04/01 14:23:35 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s && s[n] && s[n] != '\n')
		n++;
	return (n);
}

int	check_rectangle(char **map)
{
	size_t	i;
	size_t	size;

	size = ft_strlen(*map);
	i = 0;
	while (map && map[++i])
	{
		if (size != ft_strlen(map[i]))
			return (1);
	}
	return (0);
}

int	check_side_wall(char **map)
{
	int	start[2];
	int	end[2];

	start[0] = -1;
	start[1] = -1;
	end[0] = 0;
	end[1] = ft_strlen(*map) - 1;
	while (map && map[end[0]])
		end[0]++;
	while (++start[1] <= end[1])
	{
		if (map[0][start[1]] != '1' || map[end[0] - 1][start[1]] != '1')
			return (1);
	}
	while (++start[0] <= end[0] - 1)
	{
		if (map[start[0]][0] != '1' || map[start[0]][end[1]] != '1')
			return (1);
	}
	return (0);
}

int	check_chest(char **map)
{
	int	i;
	int	j;
	int	chest;

	i = -1;
	chest = 0;
	while (map && map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == 'C')
				chest++;
		}
	}
	if (chest == 0)
		return (1);
	return (0);
}

int	check_goal(char **map)
{
	int	i;
	int	j;
	int	goal;

	i = -1;
	goal = 0;
	while (map && map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == 'E')
				goal++;
		}
	}
	if (goal == 0)
		return (1);
	return (0);
}
