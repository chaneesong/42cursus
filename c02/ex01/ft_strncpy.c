/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:22:51 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 20:13:54 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (cnt < n)
	{
		if (*(src + cnt))
			*(dest + cnt) = *(src + cnt);
		else
			*(dest + cnt) = '\0';
		cnt++;
	}
	*(dest + cnt) = '\0';
	return (dest);
}
