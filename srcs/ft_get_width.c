/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:00:14 by chsong            #+#    #+#             */
/*   Updated: 2022/01/05 07:49:50 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_get_width(char **target)
{
	int	result;

	result = ft_atoi(*target);
	(*target) += ft_strlen(ft_itoa(result)) - 1;
	return (result);
}
