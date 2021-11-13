/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:08:06 by chsong            #+#    #+#             */
/*   Updated: 2021/11/13 18:47:12 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "includes/libft.h"

int	main(void)
{
	char a = 'b';
	// char dest1[5];
	char dest2[16] = "aaaaabbbbbccccc";
	char dest3[16] = "aaaaabbbbbccccc";
	char *tmp;
	// for (size_t i = 0; i < 11; i++)
	// {
	// 	printf("%zu\n", ft_strlcpy(dest2, a, i));
	// 	printf("%zu\n", strlcpy(dest3, a, i));
	// }
	tmp = ft_strchr(dest2, 'd');
	printf("%s\n", tmp);
	// ft_memcpy(dest3, a, sizeof(char) * 11);
	// printf("%p\n", dest2);
	// ft_memmove(dest2, a, sizeof(dest2));
	// ft_memmove(dest3 + 9, a, sizeof(char) * 3);
	// printf("%zu\n", ft_strlen(a));
	// printf("%lu\n", ft_strlen(a));
	// printf("%zu\n", strlen(a));
	// for(int i = 0; i < 200; i++)
	// {
	// 	printf("%d\n", ft_tolower(i));
	// 	printf("%d\n\n", tolower(i));
	// }

	return (0);
}
