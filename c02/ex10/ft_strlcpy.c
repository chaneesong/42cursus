/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:04:02 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 10:11:51 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	int				i;

	cnt = 0;
	i = 0;
	while (*(src + i))
		i++;
	if (size == 0)
		return (i);
	while (cnt < size - 1)
	{
		*dest++ = *src++;
		cnt++;
	}
	*dest = '\0';
	return (i);
}
