/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:02:07 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 21:18:35 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_is_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_is_capital(char c)
{
	if (!(ft_is_lower(c) || ft_is_upper(c) || ft_is_numeric(c)))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		cnt;

	if (!*str)
		return (str);
	cnt = 0;
	if (ft_is_lower(*str))
		*str -= 32;
	cnt = 1;
	while (*(str + cnt))
	{
		if (ft_is_upper(*(str + cnt)))
			*(str + cnt) += 32;
		if (ft_is_capital(*(str + cnt - 1)) && ft_is_lower(*(str + cnt)))
			*(str + cnt) -= 32;
		cnt++;
	}
	return (str);
}
