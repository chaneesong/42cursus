/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:08:39 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 19:14:32 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_non_print(unsigned char c)
{
	if (c <= 31 || c >= 127)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex_print(unsigned char c)
{
	int		num;
	char	*temp;

	temp = "0123456789abcdef";
	num = c;
	ft_putchar('\\');
	ft_putchar(temp[c / 16]);
	ft_putchar(temp[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				cnt;
	unsigned char	temp;

	if (!*str)
		return ;
	cnt = 0;
	while (*(str + cnt))
	{
		temp = (unsigned char)*(str + cnt);
		if (ft_is_non_print(temp))
			ft_hex_print(temp);
		else
			ft_putchar(temp);
		cnt++;
	}
}
