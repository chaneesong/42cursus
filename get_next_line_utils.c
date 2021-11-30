/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:07:32 by chsong            #+#    #+#             */
/*   Updated: 2021/11/30 22:41:37 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s && s[n])
		n++;
	return (n);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		join_len;
	int		cnt;

	join_len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (join_len + 1));
	if (!tmp)
		return (NULL);
	cnt = 0;
	while (s1 && *s1)
	{
		tmp[cnt] = *s1;
		s1++;
		cnt++;
	}
	while (s2 && *s2)
	{
		tmp[cnt] = *s2;
		s2++;
		cnt++;
	}
	tmp[cnt] = '\0';
	return (tmp);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*res;

	res = b;
	while (len--)
		*res++ = (unsigned char)c;
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = (void *)malloc(size * count);
	if (!tmp)
		return (NULL);
	tmp = ft_memset(tmp, 0, size * count);
	return (tmp);
}

int	ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return (i);
	else
		return (-1);
}
