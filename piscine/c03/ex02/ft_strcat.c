/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:27:25 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 19:42:56 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_cnt;
	int	src_cnt;

	dest_cnt = 0;
	while (*(dest + dest_cnt))
		dest_cnt++;
	src_cnt = 0;
	while (*(src + src_cnt))
	{
		*(dest + dest_cnt) = *(src + src_cnt);
		dest_cnt++;
		src_cnt++;
	}
	*(dest + dest_cnt) = '\0';
	return (dest);
}
