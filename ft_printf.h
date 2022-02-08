/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:27:14 by chsong            #+#    #+#             */
/*   Updated: 2022/02/08 12:42:29 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "./libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_print_type(char c, va_list ap);
int	ft_print_char(va_list ap);
int	ft_print_str(va_list ap);
int	ft_print_int(va_list ap);
int	ft_print_unsigned_int(va_list ap);
int	ft_print_void_ptr(va_list ap);
int	ft_print_hex_lower(va_list ap);
int	ft_print_hex_upper(va_list ap);

#endif
