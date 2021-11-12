/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:08:06 by chsong            #+#    #+#             */
/*   Updated: 2021/11/13 01:35:39 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "includes/libft.h"

int	main(void)
{
	char a[11] = "BlockDMask";
	// char dest1[5];
	// char dest2[12] = "abcdeasddlf";
	// char dest3[12] = "abcdeasddlf";

	// memcpy(dest1, a, sizeof(char) * 10);
	// memcpy(dest2, a, sizeof(char) * 15);
	// ft_memcpy(dest3, a, sizeof(char) * 11);

	printf("%zu\n", ft_strlen(a));
	// printf("%s\n", dest2);
	// printf("%s\n", dest3);
	// printf("%lu\n", ft_strlen(a));
	// printf("%zu\n", strlen(a));
	// for(int i = 0; i < 200; i++)
	// {
	// 	printf("%d\n", ft_tolower(i));
	// 	printf("%d\n\n", tolower(i));
	// }

	return (0);
}
