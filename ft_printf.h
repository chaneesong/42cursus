/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:27:14 by chsong            #+#    #+#             */
/*   Updated: 2022/01/05 05:59:13 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include "./libft/libft.h"
#include <stdio.h>

typedef struct s_data
{
	int	lshift;
	int	zpadding;
	int	sign;
	int	space;
	int	hash;
	int	precision;
	int	wildcard;
	int	width;
	int	format;
}	t_data;

int		ft_printf(const char *str, ...);
int		type(char *str);
int		print_format(char *target, va_list ap);
int		get_precision(char **target);
int		get_width(char **target);

char	*copy_target(const char **str);

void	contain_data(char *target, t_data *data);

#	endif