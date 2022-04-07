/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_other_item.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:06:21 by chsong            #+#    #+#             */
/*   Updated: 2022/04/07 10:29:35 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_other_item(char **map)
{
	int	i;
	int	j;

	i = -1;
	while (map && map[++i])
	{
		j = -1;
		while (map[i][++j] && map[i][j] != '\n')
		{
			if (map[i][j] != '0' && map[i][j] != '1' && \
				map[i][j] != 'C' && map[i][j] != 'E' && map[i][j] != 'P')
			{
				return (1);
			}
		}
	}
	return (0);
}
