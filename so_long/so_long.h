/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:08:42 by chsong            #+#    #+#             */
/*   Updated: 2022/03/31 13:43:09 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "gnl/get_next_line.h"

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
	void	*tile;
	void	*cliff;
	void	*chest;
	void	*shipN;
	void	*shipW;
	void	*shipS;
	void	*shipE;
	void	*goal;
}	t_mlx;

typedef struct s_size
{
	int				width;
	int				height;
	int				x;
	int				y;
}	t_size;

char	**read_map(char *filename);
void	set_mlx_info(t_mlx *mlx, t_size *size);
void	put_img(t_mlx *mlx, t_size *size, char **map);

void	*ft_calloc(size_t count, size_t size);

#endif