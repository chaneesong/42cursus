/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:52:46 by chsong            #+#    #+#             */
/*   Updated: 2021/10/25 23:46:59 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char **str)
{
	str++;
	while (*str)
	{
		while (**str)
		{
			ft_putchar(**str);
			(*str)++;
		}
		ft_putchar('\n');
		str++;
	}
}

int	main(int argc, char *argv[])
{
	argc = 0;
	ft_print_params(argv);
	return (0);
}
