/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:27:14 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 15:44:23 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
char	*ft_parse_value(const char **str, va_list ap);
char	*ft_parse_ap(const char *str, va_list ap);
char	*ft_ctos(char c);
char	*ft_stos(char *str);
char	*ft_itos(int num);
char	*ft_utos(unsigned int num);
char	*ft_ultos(unsigned long num);
int		ft_putstr(char *str, int size);
size_t	ft_strlen(char *str);
#endif
