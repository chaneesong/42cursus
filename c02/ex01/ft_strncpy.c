/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:22:51 by chsong            #+#    #+#             */
/*   Updated: 2021/10/18 19:32:40 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (cnt < n)
	{
		*dest++ = *src++;
		cnt++;
	}
	return (dest);
}

#include <stdio.h>

int main()
{
	char arr1[] = "hello";
	char arr2[] = "asdfg";

	ft_strncpy(arr2, arr1, 5);
	printf("%s\n", arr2);
	printf("%s\n", arr1);
}
