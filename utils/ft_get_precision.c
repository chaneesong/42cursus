/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:59:24 by chsong            #+#    #+#             */
/*   Updated: 2022/01/05 07:48:55 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_get_precision(char **target)
{
	int	result;

	(*target)++;
	result = ft_atoi(*target);
	(*target) += ft_strlen(ft_itoa(result)) - 1;
	return(result);
}
