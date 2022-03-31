/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:12:39 by chsong            #+#    #+#             */
/*   Updated: 2022/03/31 18:49:08 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	move_up(t_mlx *mlx, t_size *size, char **map)
{
	if (map[size->p_y - 1][size->p_x] == '1')
		return ;
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->tile, size->p_x * 64, size->p_y * 64);
	size->p_y--;
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->shipn, size->p_x * 64, size->p_y * 64);
}

static void	move_right(t_mlx *mlx, t_size *size, char **map)
{
	if (map[size->p_y][size->p_x + 1] == '1')
		return ;
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->tile, size->p_x * 64, size->p_y * 64);
	size->p_x++;
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->shipe, size->p_x * 64, size->p_y * 64);
}

static void	move_down(t_mlx *mlx, t_size *size, char **map)
{
	if (map[size->p_y + 1][size->p_x] == '1')
		return ;
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->tile, size->p_x * 64, size->p_y * 64);
	size->p_y++;
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->ships, size->p_x * 64, size->p_y * 64);
}

static void	move_left(t_mlx *mlx, t_size *size, char **map)
{
	if (map[size->p_y][size->p_x - 1] == '1')
		return ;
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->tile, size->p_x * 64, size->p_y * 64);
	size->p_x--;
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->shipw, size->p_x * 64, size->p_y * 64);
}

void	move_position(int key, t_mlx *mlx)
{
	if (key == W || key == UP)
		move_up(mlx, mlx->size, mlx->map);
	else if (key == D || key == RIGHT)
		move_right(mlx, mlx->size, mlx->map);
	else if (key == S || key == DOWN)
		move_down(mlx, mlx->size, mlx->map);
	else if (key == A || key == LEFT)
		move_left(mlx, mlx->size, mlx->map);
}