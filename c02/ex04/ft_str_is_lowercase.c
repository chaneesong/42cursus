/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 01:09:26 by chsong            #+#    #+#             */
/*   Updated: 2021/10/17 01:12:25 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	cnt;

	if (!*str)
		return (1);
	cnt = 0;
	while (*(str + cnt))
	{
		if (!ft_is_lower(*(str + cnt)))
			return (0);
		cnt++;
	}
	return (1);
}
