/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:22:29 by chsong            #+#    #+#             */
/*   Updated: 2022/02/11 11:02:46 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar_fd(char c, int pre_size)
{
	int	size;

	size = ft_check_size(pre_size, 1);
	if (size != -1)
		write(1, &c, 1);
	return (size);
}
