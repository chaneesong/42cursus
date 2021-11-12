/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:08:06 by chsong            #+#    #+#             */
/*   Updated: 2021/11/12 16:36:58 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char a[11] = "BlockDMask";
	char dest1[5] = "abcde";
	char dest2[12] = "abcdeasddlf";

	memcpy(dest1, a, sizeof(char) * 10);
	memcpy(dest2, a, sizeof(char) * 10);

	printf("%s\n", dest1);
	printf("%s\n", dest2);
	// printf("%lu\n", ft_strlen(a));
	// printf("%zu\n", strlen(a));
	// for(int i = 0; i < 200; i++)
	// {
	// 	printf("%d\n", ft_tolower(i));
	// 	printf("%d\n\n", tolower(i));
	// }

	return (0);
}