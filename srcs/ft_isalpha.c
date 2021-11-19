/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:08:25 by chsong            #+#    #+#             */
/*   Updated: 2021/11/19 19:04:10 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}


int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
