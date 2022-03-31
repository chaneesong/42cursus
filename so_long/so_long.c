/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:09:24 by chsong            #+#    #+#             */
/*   Updated: 2022/03/31 13:28:12 by chsong           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	char	**map;
	t_mlx	mlx;
	t_size	*size;

	size = (t_size *)ft_calloc(1, sizeof(t_size));
	if (argc != 2)
		return (-1);
	map = read_map(argv[1]);
	check_map_size(map, size);
	set_mlx_info(&mlx, size);
	put_img(&mlx, size, map);
	mlx_loop(mlx.mlx);
	return (0);
}
