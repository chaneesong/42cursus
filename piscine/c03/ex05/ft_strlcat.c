/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:29:11 by chsong            #+#    #+#             */
/*   Updated: 2021/10/23 17:31:13 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *str)
{
	unsigned int	cnt;

	cnt = 0;
	while (*str)
	{
		str++;
		cnt++;
	}
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_cnt;
	unsigned int	dest_cnt;

	if (size <= ft_length(dest))
		return (size + ft_length(src));
	src_cnt = 0;
	dest_cnt = ft_length(dest);
	while (*(src + src_cnt) && dest_cnt + 1 < size)
	{
		*(dest + dest_cnt) = *(src + src_cnt);
		dest_cnt++;
		src_cnt++;
	}
	*(dest + dest_cnt) = '\0';
	return (ft_length(dest) + ft_length(src + src_cnt));
}
