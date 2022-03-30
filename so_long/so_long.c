/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:09:24 by chsong            #+#    #+#             */
/*   Updated: 2022/03/30 17:42:44 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx/mlx.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	deal_key(int key, void *param)
{
	ft_putchar('X');
	return (0);
}

int	main()
{
	int x = 0;
	int y = 0;
	int x2 = 0;
	int y2 = 0;
	int x3 = 0;
	int y3 = 0;
	void *mlx_ptr = mlx_init();
	void *img_ptr = mlx_xpm_file_to_image(mlx_ptr, "img/tile.xpm", &x, &y);
	void *img_ptr2 = mlx_xpm_file_to_image(mlx_ptr, "img/cliff.xpm", &x2, &y2);
	void *img_ptr3 = mlx_xpm_file_to_image(mlx_ptr, "img/shipS.xpm", &x3, &y3);
	void *win_ptr = mlx_new_window(mlx_ptr, x * 12, y * 8, "test");

	mlx_clear_window(mlx_ptr, win_ptr);
	int i = 0;
	while (i + x <= x * 12)
	{
		int j = 0;
		while (j + y <= y * 8)
		{
			if (i + x == x || i + x == x * 12 || j + y == y || j + y == y * 8)
				mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr2, i, j);
			else
				mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, i, j);
			j += x;
		}
		i += y;
	}
	i = x;
	while (i + x <= x * 11)
	{
		int j = y;
		while (j + y <= y * 7)
		{
			mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr3, i, j);
			j += x;
		}
		i += y;
	}
	// mlx_key_hook(win_ptr, deal_key, (void *)0);
	mlx_loop(mlx_ptr);
	return (0);
}
