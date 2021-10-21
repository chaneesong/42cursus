/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:28:29 by chsong            #+#    #+#             */
/*   Updated: 2021/10/20 23:42:11 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str, char *to_find, int length)
{
	int	cnt;

	cnt = 0;
	while (cnt < length)
	{
		if (*(str + cnt) != *(to_find + cnt))
			return (0);
		cnt++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	while (*(to_find + j))
		j++;
	if (!*to_find)
		return (str);
	i = 0;
	while (*(str + i))
		i++;
	while (i >= j)
	{
		i--;
		if (ft_strcmp(str, to_find, j))
			return (str);
		str++;
	}
	return ("\0");
}

#include <stdio.h>
int main()
{
	char	arr1[] = "My name song";
	char	arr2[] = "name";
	char	*res = NULL;
	*res = *ft_strstr(arr1, arr2);
	printf("%s\n", res);
}
