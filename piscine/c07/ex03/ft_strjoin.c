/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 02:16:52 by chsong            #+#    #+#             */
/*   Updated: 2021/10/24 02:23:50 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*(str + cnt))
		cnt++;
	return (cnt - 1);
}

char	*ft_mystrcat(char *dest, char *src, char *sep)
{
	int	dest_cnt;
	int	cnt;

	dest_cnt = 0;
	while (*(dest + dest_cnt))
		dest_cnt++;
	cnt = 0;
	while (*(src + cnt))
	{
		*(dest + dest_cnt) = *(src + cnt);
		dest_cnt++;
		cnt++;
	}
	cnt = 0;
	while (*(sep + cnt))
	{
		*(dest + dest_cnt) = *(sep + cnt);
		dest_cnt++;
		cnt++;
	}
	*(dest + dest_cnt) = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join_ptr;
	int		str_len;
	int		cnt;

	if (!size)
	{
		join_ptr = (char *)malloc(sizeof(char));
		*join_ptr = '\0';
		return (join_ptr);
	}
	cnt = -1;
	while (*(strs + ++cnt))
		str_len = str_len + ft_strlen(*(strs + cnt));
	str_len = str_len + (ft_strlen(sep) * size - 1);
	join_ptr = (char *)malloc(sizeof(char) * (str_len + 1));
	cnt = -1;
	while (++cnt < size - 1)
		join_ptr = ft_mystrcat(join_ptr, *(strs + cnt), sep);
	join_ptr = ft_mystrcat(join_ptr, *(strs + cnt), "\0");
	return (join_ptr);
}
