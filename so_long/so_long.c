/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:09:24 by chsong            #+#    #+#             */
/*   Updated: 2022/04/01 15:33:01 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map_size(char **map, t_size *size)
{
	while (map[0][size->width])
		size->width++;
	while (map[size->height])
		size->height++;
	if (size->width > 0)
		size->width--;
}

static int	send_key(int key, t_mlx *mlx)
{
	if (key == ESC)
	{
		printf("pressed ESC!\n");
		mlx_destroy_window(mlx->mlx, mlx->win);
		exit(0);
	}
	else
		move_position(key, mlx);
	return (0);
}

static int	close_to_click(t_mlx *mlx)
{
	printf("click X\n");
	mlx_destroy_window(mlx->mlx, mlx->win);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_mlx	mlx;

	if (argc != 2)
		return (-1);
	mlx.size = (t_size *)ft_calloc(1, sizeof(t_size));
	mlx.map = read_map(argv[1]);
	check_map_size(mlx.map, mlx.size);
	set_mlx_info(&mlx, mlx.size);
	put_img(&mlx, mlx.size, mlx.map);
	mlx_key_hook(mlx.win, send_key, &mlx);
	mlx_hook(mlx.win, 17, 0, close_to_click, &mlx);
	mlx_loop(mlx.mlx);
	return (0);
}
