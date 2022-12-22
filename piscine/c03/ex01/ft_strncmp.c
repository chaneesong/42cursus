/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:27:06 by chsong            #+#    #+#             */
/*   Updated: 2021/10/23 16:00:52 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	if ((!*s1 && !*s2) || n == 0)
		return (0);
	if (!*s1)
		return (-(*s2));
	if (!*s2)
		return (*s1);
	cnt = 0;
	while (cnt < n - 1 && *(s1 + cnt) && *(s2 + cnt))
	{
		if (*(s1 + cnt) != *(s2 + cnt))
			break ;
		cnt++;
	}
	return (*(s1 + cnt) - *(s2 + cnt));
}
