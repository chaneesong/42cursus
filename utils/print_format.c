/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:43:16 by chsong            #+#    #+#             */
/*   Updated: 2022/01/05 06:00:12 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int print_format(char *target, va_list ap)
{
	t_data	t_data;
	int		size;

	size = 0;
	ft_memset(&t_data, 0, sizeof(t_data));
	contain_data(target, &t_data);
	return (size);
}