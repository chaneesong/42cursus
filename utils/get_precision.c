/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:59:24 by chsong            #+#    #+#             */
/*   Updated: 2022/01/04 15:11:34 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	get_precision(char **target)
{
	int	result;

	(*target)++;
	result = ft_atoi(*target);
	return(result);
}