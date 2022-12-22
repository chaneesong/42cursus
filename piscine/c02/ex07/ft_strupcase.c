/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:32:11 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 14:38:02 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (*(str + cnt))
	{
		if (ft_is_lower(*(str + cnt)))
			*(str + cnt) -= 32;
		cnt++;
	}
	return (str);
}
