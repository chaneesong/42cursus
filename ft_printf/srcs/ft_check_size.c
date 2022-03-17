/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:26:00 by chsong            #+#    #+#             */
/*   Updated: 2022/02/11 13:36:08 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_check_size(int pre_size, int cur_size)
{
	int	return_size;

	return_size = pre_size + cur_size;
	if (return_size - pre_size != cur_size || return_size == 2147483647)
		return (-1);
	return (return_size);
}
