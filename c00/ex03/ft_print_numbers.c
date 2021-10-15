/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:43:52 by chsong            #+#    #+#             */
/*   Updated: 2021/10/15 01:14:53 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	cur_num;

	cur_num = '0';
	while (cur_num <= '9')
	{
		ft_putchar(cur_num);
		cur_num++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
