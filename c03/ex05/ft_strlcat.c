/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:29:11 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 16:12:41 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	unsigned int	dest_cnt;
	unsigned int	src_cnt;

	dest_cnt = 0;
	while (*(dest + dest_cnt))
		dest_cnt++;
	src_cnt = 0;
	while (*(src + src_cnt))
		src_cnt++;
	if (dest_cnt > size)
		return (src_cnt + size);
	res = 0;
	while (res + 1 < size)
	{
		*(dest + dest_cnt) = *(src + res);
		dest_cnt++;
		res++;
		if (!*(src + res))
			break ;
	}
	*(dest + dest_cnt) = '\0';
	return (dest_cnt);
}
