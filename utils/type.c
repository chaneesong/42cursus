/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:42:46 by chsong            #+#    #+#             */
/*   Updated: 2022/01/02 22:58:28 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_format_tag(char **str, char *tmp)
{
	if (**str == 'd')
		continue ;
	else if (**str == 'c')
		continue ;
	else if (**str == 's')
		continue ;
	else if (**str == 'f')
		continue ;
}