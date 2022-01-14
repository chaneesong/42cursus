/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:27:14 by chsong            #+#    #+#             */
/*   Updated: 2022/01/14 13:07:55 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include "./libft/libft.h"
#include <stdio.h>

// typedef struct s_data
// {
// 	int	lshift;
// 	int	zpadding;
// 	int	sign;
// 	int	space;
// 	int	hash;
// 	int	precision;
// 	int	width;
// 	int	format;
// }	t_data;

int		ft_printf(const char *str, ...);
int		ft_print_format(char c, va_list ap);
// int		ft_get_precision(char **target);
// int		ft_get_width(char **target);
// int		ft_print_contain(t_data data);
// int		ft_print_sign(int n);
// int		ft_print_space(int n);
int		ft_lshift(int width, int len, int zpadding);
int		ft_print_char(va_list ap);
int		ft_print_str(va_list ap);
int		ft_print_int(va_list ap);
int		ft_print_unsigned_int(va_list ap);
int		ft_print_void_ptr(va_list ap);
int		ft_print_hex_lower(va_list ap);
int		ft_print_hex_upper(va_list ap);
int		ft_print_type(char c, va_list ap);

// char	*ft_copy_target(const char **str);

// void	ft_contain_data(char *target, t_data *data, va_list ap);

#	endif
