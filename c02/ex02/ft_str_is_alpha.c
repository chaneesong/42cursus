/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:24:07 by chsong            #+#    #+#             */
/*   Updated: 2021/10/17 00:24:10 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upper(char str)
{
	if (str >= 65 && str <= 90)
		return (1);
	return (0);
}

int	ft_is_lower(char str)
{
	if (str >= 97 && str <= 122)
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	cnt;

	if (!*str)
		return (1);
	cnt = 0;
	while (*(str + cnt))
	{		
		if (!(ft_is_upper(*(str + cnt))) && !(ft_is_lower(*(str + cnt))))
			return (0);
		cnt++;
	}
	return (1);
}
