/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:27:14 by chsong            #+#    #+#             */
/*   Updated: 2022/01/05 07:49:33 by chsong           ###   ########.fr       */
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
	int	width;
	int	format;
}	t_data;

int		ft_printf(const char *str, ...);
int		ft_type(char *str);
int		ft_print_format(char *target, va_list ap);
int		ft_get_precision(char **target);
int		ft_get_width(char **target);

char	*ft_copy_target(const char **str);

void	ft_contain_data(char *target, t_data *data);

#	endif
