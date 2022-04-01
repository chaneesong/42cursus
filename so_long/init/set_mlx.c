/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_mlx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:03:36 by chsong            #+#    #+#             */
/*   Updated: 2022/04/01 17:49:43 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_mlx_info(t_mlx *mlx, t_size *size)
{
	mlx->mlx = mlx_init();
	mlx->shipn = mlx_xpm_file_to_image(mlx->mlx, \
					"img/shipN.xpm", &size->x, &size->y);
	mlx->shipw = mlx_xpm_file_to_image(mlx->mlx, \
					"img/shipW.xpm", &size->x, &size->y);
	mlx->ships = mlx_xpm_file_to_image(mlx->mlx, \
					"img/shipS.xpm", &size->x, &size->y);
	mlx->shipe = mlx_xpm_file_to_image(mlx->mlx, \
					"img/shipE.xpm", &size->x, &size->y);
	mlx->cliff = mlx_xpm_file_to_image(mlx->mlx, \
					"img/cliff.xpm", &size->x, &size->y);
	mlx->chest = mlx_xpm_file_to_image(mlx->mlx, \
					"img/chest.xpm", &size->x, &size->y);
	mlx->tile = mlx_xpm_file_to_image(mlx->mlx, \
					"img/tile.xpm", &size->x, &size->y);
	mlx->goal = mlx_xpm_file_to_image(mlx->mlx, \
					"img/sign.xpm", &size->x, &size->y);
	size->width = size->x * size->width;
	size->height = size->y * size->height;
	mlx->win = mlx_new_window(mlx->mlx, size->width, size->height, "so_long");
	mlx_clear_window(mlx->mlx, mlx->win);
}
