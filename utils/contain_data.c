/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contain_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:11:24 by chsong            #+#    #+#             */
/*   Updated: 2022/01/05 07:04:27 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	contain_data(char *target, t_data *data)
{
	while(target && *target)
	{
		if (*target == '-')
			(*data).lshift = 1;
		else if (*target == '0')
			(*data).zpadding = 1;
		else if (*target == '.')
			(*data).precision = get_precision(&target);
		else if (*target == '#')
			(*data).hash = 1;
		else if (*target == ' ')
			(*data).space = 1;
		else if (*target == '+')
			(*data).sign = 1;
		else if (*target != '0' && ft_isdigit(*target))
			(*data).width = get_width(&target);
		else
		{
			printf("\ntest=%c\n", *target);
			(*data).format = (int)(*target);
		}
		target++;
	}
}