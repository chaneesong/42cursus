/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:43:16 by chsong            #+#    #+#             */
/*   Updated: 2022/01/12 05:08:24 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_print_format(char *target, va_list ap)
{
	t_data	t_data;
	int		size;

	size = 0;
	ft_memset(&t_data, 0, sizeof(t_data));
	ft_contain_data(target, &t_data, ap);
	size += ft_print_type(t_data, ap);
	return (size);
}
