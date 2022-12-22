/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 00:45:23 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 09:37:32 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_number(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	cnt;

	if (!*str)
		return (1);
	cnt = 0;
	while (*(str + cnt))
	{
		if (!ft_is_number(*(str + cnt)))
			return (0);
		cnt++;
	}
	return (1);
}
