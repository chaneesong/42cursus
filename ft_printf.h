/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:27:14 by chsong            #+#    #+#             */
/*   Updated: 2022/02/09 20:23:12 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_print_type(char c, char *str);
int		ft_print_str(char *str);
char	*ft_ap_to_str(char c, va_list ap);
char	*ft_ctos(char c);
char	*ft_stos(char *str);
char	*ft_itos(int num);
char	*ft_utos(unsigned int num);
char	*ft_ultos(unsigned long num);

#endif
