/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:08:06 by chsong            #+#    #+#             */
/*   Updated: 2021/11/11 00:08:35 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char a[5] = {'a', 'b', 'c', 'd', 'e'};

	printf("%lu\n", ft_strlen(a));
	printf("%lu\n", strlen(a));

	return (0);
}