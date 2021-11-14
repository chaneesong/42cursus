/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:08:06 by chsong            #+#    #+#             */
/*   Updated: 2021/11/14 19:58:58 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "includes/libft.h"

int	main(void)
{
	// char a = 'b';
	char dest1[100] = "125716571927584127956712589";
	// char dest2[16] = "abbbbbccccc";
	// char dest3[16] = "abbbbbccccc";
	// char *tmp;
	// char *tmp2;
	
	printf("%d\n", ft_atoi(dest1));
	printf("%d\n", atoi(dest1));

	// for (size_t i = 0; i < 150; i++)
	// {
	// 	tmp = ft_strrchr(dest2, i);
	// 	tmp2 = strrchr(dest2, i);
	// 	printf("%zu %s\n", i, tmp);
	// 	printf("%zu %s\n", i, tmp2);
	// 	printf("\n");
	// }
	return (0);
}
