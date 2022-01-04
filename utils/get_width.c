/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:00:14 by chsong            #+#    #+#             */
/*   Updated: 2022/01/04 15:10:52 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	get_width(char **target)
{
	int	result;

	result = ft_atoi(*target);
	return (result);
}