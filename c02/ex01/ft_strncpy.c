/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:22:51 by chsong            #+#    #+#             */
/*   Updated: 2021/10/23 15:38:47 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cnt;

	if (!*src)
		return (dest);
	cnt = 0;
	while (cnt < n && *(src + cnt))
	{
		*(dest + cnt) = *(src + cnt);
		cnt++;
	}
	while (cnt < n)
	{
		*(dest + cnt) = '\0';
		cnt++;
	}
	return (dest);
}
