/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:14:15 by chsong            #+#    #+#             */
/*   Updated: 2022/04/01 15:15:44 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_img_to_window(char c, int x, int y, t_mlx *mlx)
{
	if (c == '1')
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->cliff, x, y);
	else
	{
		mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->tile, x, y);
		if (c == 'P')
		{
			mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->shipn, x, y);
			mlx->size->p_x = x / mlx->size->x;
			mlx->size->p_y = y / mlx->size->y;
		}
		else if (c == 'C')
		{
			mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->chest, x, y);
			mlx->size->chest++;
		}
		else if (c == 'E')
			mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->goal, x, y);
	}
}

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
			put_img_to_window(map[i][j], j * size->x, i * size->y, mlx);
			if (map[i][j] == 'P')
				map[i][j] = '0';
		}
	}
}
