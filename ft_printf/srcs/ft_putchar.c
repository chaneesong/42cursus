/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:22:29 by chsong            #+#    #+#             */
/*   Updated: 2022/02/11 13:38:06 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar(char c, int pre_size)
{
	int	size;

	size = ft_check_size(pre_size, 1);
	if (size != -1)
		write(1, &c, 1);
	return (size);
}
