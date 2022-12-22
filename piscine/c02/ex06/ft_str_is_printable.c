/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:25:30 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 19:25:33 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char c)
{
	if (c < 32 || c == 127)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (ft_is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}
