/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:14:15 by chsong            #+#    #+#             */
/*   Updated: 2022/03/31 13:44:42 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_img(t_mlx *mlx, t_size *size, char **map)
{
	int	i;
	int	j;
	
	i = -1;
	while (++i * size->x < size->height)
	{
		j = -1;
		while (++j * size->y < size->width)
		{
			if (map[i][j] == '1')
				mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->cliff, j * size->y, i * size->x);
			else
			{
				mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->tile, j * size->y, i * size->x);
				if (map[i][j] == 'P')
					mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->shipS, j * size->y, i * size->x);
				else if (map[i][j] == 'E')
					mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->chest, j * size->y, i * size->x);
				else if (map[i][j] == 'C')
					mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->goal, j * size->y, i * size->x);
			}
		}
	}
}