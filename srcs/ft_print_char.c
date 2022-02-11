/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:53:41 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 21:04:33 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_char(va_list ap, int pre_size)
{
	int	size;

	size = ft_putchar_fd(va_arg(ap, int), pre_size);
	return (size);
}
