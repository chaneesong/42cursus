/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:49:15 by chsong            #+#    #+#             */
/*   Updated: 2021/10/23 21:59:18 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num_ptr;
	int	num;

	if (min >= max)
		return (NULL);
	num_ptr = (int *)malloc(sizeof(int) * (max - min));
	num = 0;
	while (min < max)
	{
		*(num_ptr + num) = min;
		num++;
		min++;
	}
	return (num_ptr);
}
