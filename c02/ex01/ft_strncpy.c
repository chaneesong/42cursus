/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:22:51 by chsong            #+#    #+#             */
/*   Updated: 2021/10/17 00:22:55 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*temp;
	unsigned int	cnt;

	cnt = 0;
	*temp = dest;
	while (cnt < n)
	{
		*temp++ = *src++;
		cnt++;
	}
	return (temp);
}
