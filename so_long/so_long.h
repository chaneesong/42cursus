/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:08:42 by chsong            #+#    #+#             */
/*   Updated: 2022/03/31 18:18:00 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "gnl/get_next_line.h"

# define ESC	53	
# define W		13
# define A		0
# define S		1
# define D		2
# define UP		126
# define RIGHT	124
# define DOWN	125
# define LEFT	123

typedef struct s_size
{
	int	width;
	int	height;
	int	x;
	int	y;
	int	p_x;
	int	p_y;
}	t_size;

typedef struct s_mlx
{
	char			**map;
	void			*mlx;
	void			*win;
	void			*tile;
	void			*cliff;
	void			*chest;
	void			*shipn;
	void			*shipw;
	void			*ships;
	void			*shipe;
	void			*goal;
	struct s_size	*size;
}	t_mlx;

char	**read_map(char *filename);
void	set_mlx_info(t_mlx *mlx, t_size *size);
void	put_img(t_mlx *mlx, t_size *size, char **map);

void	move_position(int key, t_mlx *mlx);

void	*ft_calloc(size_t count, size_t size);

#endif