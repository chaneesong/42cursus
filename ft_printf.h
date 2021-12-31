/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:27:14 by chsong            #+#    #+#             */
/*   Updated: 2021/12/31 17:53:24 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include "./libft/libft.h"

typedef struct s_flags
{
	int	lshift;
	int	zpadding;
	int	sign;
	int	space;
	int	hash;
	int	precision;
	int	wildcard;
	int	width;
}	t_flags;

int	ft_printf(const char *str, ...);
int	ft_type(char type, char *str);

#	endif