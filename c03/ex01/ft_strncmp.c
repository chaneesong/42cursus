/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:27:06 by chsong            #+#    #+#             */
/*   Updated: 2021/10/20 23:04:51 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (*(s1 + cnt) && cnt <= n)
	{
		if (*(s1 + cnt) != *(s2 + cnt))
			return (1);
		cnt++;
	}
	return (0);
}
