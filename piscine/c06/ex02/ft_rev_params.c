/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:18:21 by chsong            #+#    #+#             */
/*   Updated: 2021/10/22 21:18:23 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_params(int cnt, char **str)
{
	int	cur;

	while (cnt > 0)
	{
		cur = 0;
		while (str[cnt][cur])
		{
			ft_putchar(str[cnt][cur]);
			cur++;
		}
		ft_putchar('\n');
		cnt--;
	}
}

int	main(int argc, char *argv[])
{
	ft_rev_params(argc - 1, argv);
	return (0);
}
