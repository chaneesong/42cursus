/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 01:00:53 by chsong            #+#    #+#             */
/*   Updated: 2021/10/24 03:04:25 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*num_ptr;
	int	num;

	if (min >= max)
		return (0);
	num_ptr = (int *)malloc(sizeof(int) * (max - min));
	num = 0;
	while (min < max)
	{
		*(num_ptr + num) = min;
		min++;
	}
	*range = num_ptr;
	return (num);
}
