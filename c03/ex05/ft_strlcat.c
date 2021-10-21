/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:29:11 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 00:02:16 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	int				dest_cnt;
	unsigned int	src_cnt;

	dest_cnt = 0;
	while (*(dest + dest_cnt))
		dest_cnt++;
	res = 0;
	while (*(src + res))
		res++;
	src_cnt = 0;
	while (src_cnt < size - 1)
	{
		*(dest + dest_cnt) = *(src + src_cnt);
		dest_cnt++;
		src_cnt++;
	}
	*(dest + dest_cnt) = '\0';
	return (res);
}

#include <stdio.h>
int	main()
{
	char	arr1[] = "My name is song";
	char	arr2[] = "sanghoon";
	unsigned int	a = 4;
	unsigned int	res = 0;
	res = ft_strlcat(arr1, arr2 ,a);
	printf("%s \n", arr1);
}
