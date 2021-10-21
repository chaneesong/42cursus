/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:01:03 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 14:38:48 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (*(str + cnt))
	{
		if (ft_is_upper(*(str + cnt)))
			*(str + cnt) += 32;
		cnt++;
	}
	return (str);
}
