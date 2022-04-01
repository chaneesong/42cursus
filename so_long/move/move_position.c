/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:12:39 by chsong            #+#    #+#             */
/*   Updated: 2022/04/01 15:38:41 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	move_before(t_mlx *mlx, void *img)
{
	mlx_put_image_to_window(mlx->mlx, mlx->win, \
		mlx->tile, mlx->size->p_x * 64, mlx->size->p_y * 64);
	mlx_put_image_to_window(mlx->mlx, mlx->win, \
		img, mlx->size->p_x * 64, mlx->size->p_y * 64);
}

static void	move_after(t_mlx *mlx, void *img, char **map)
{
	if (map[mlx->size->p_y][mlx->size->p_x] == 'C')
	{
		map[mlx->size->p_y][mlx->size->p_x] = '0';
		mlx->size->chest--;
	}
	mlx_put_image_to_window(mlx->mlx, mlx->win, \
		mlx->tile, mlx->size->p_x * 64, mlx->size->p_y * 64);
	mlx_put_image_to_window(mlx->mlx, mlx->win, \
		img, mlx->size->p_x * 64, mlx->size->p_y * 64);
}

static int	move(t_mlx *mlx, char **map, void *img, int id)
{
	const int	mx[4] = {0, 1, 0, -1};
	const int	my[4] = {-1, 0, 1, 0};

	move_before(mlx, img);
	if (map[mlx->size->p_y + my[id]][mlx->size->p_x + mx[id]] == '1' || \
		(map[mlx->size->p_y + my[id]][mlx->size->p_x + mx[id]] == 'E' && \
		mlx->size->chest))
		return (0);
	mlx_put_image_to_window(mlx->mlx, mlx->win, \
		mlx->tile, mlx->size->p_x * 64, mlx->size->p_y * 64);
	mlx->size->p_x += mx[id];
	mlx->size->p_y += my[id];
	move_after(mlx, img, map);
	return (1);
}

void	move_position(int key, t_mlx *mlx)
{
	static int	count;
	int			cur;

	cur = 0;
	if (key == W || key == UP)
		cur = move(mlx, mlx->map, mlx->shipn, 0);
	else if (key == D || key == RIGHT)
		cur = move(mlx, mlx->map, mlx->shipe, 1);
	else if (key == S || key == DOWN)
		cur = move(mlx, mlx->map, mlx->ships, 2);
	else if (key == A || key == LEFT)
		cur = move(mlx, mlx->map, mlx->shipw, 3);
	if (cur)
	{
		count++;
		printf("move = %d\n", count);
	}
	if (mlx->map[mlx->size->p_y][mlx->size->p_x] == 'E' && !mlx->size->chest)
	{
		mlx_destroy_window(mlx->mlx, mlx->win);
		exit(0);
	}
}
