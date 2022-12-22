/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:28:29 by chsong            #+#    #+#             */
/*   Updated: 2021/10/23 16:21:42 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str, char *to_find)
{
	int	cnt;

	cnt = 0;
	while (*(to_find + cnt))
	{
		if (*(str + cnt) != *(to_find + cnt))
			return (0);
		cnt++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	cnt;

	if (!*to_find)
		return (str);
	cnt = 0;
	while (*(str + cnt))
	{
		if (ft_strcmp(str + cnt, to_find))
			return ((str + cnt));
		cnt++;
	}
	return ("\0");
}
