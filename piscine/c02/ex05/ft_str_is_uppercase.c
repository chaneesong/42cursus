/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 01:16:30 by chsong            #+#    #+#             */
/*   Updated: 2021/10/17 01:18:52 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upper(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	cnt;

	if (!*str)
		return (1);
	cnt = 0;
	while (*(str + cnt))
	{
		if (!ft_is_upper(*(str + cnt)))
			return (0);
		cnt++;
	}
	return (1);
}
