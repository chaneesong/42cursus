/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:49:16 by chsong            #+#    #+#             */
/*   Updated: 2021/10/15 01:14:32 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char first, char second, char third);
void	ft_print_comb(void);
int		ft_is_last(char first, char second, char third);

void	ft_print_comb(void)
{
	char	first_num;
	char	second_num;
	char	third_num;

	first_num = '0';
	second_num = '1';
	third_num = '2';
	while (first_num <= '7')
	{
		while (second_num <= '8')
		{
			while (third_num <= '9')
			{
				ft_putchar(first_num, second_num, third_num);
				third_num++;
			}
			third_num = ++second_num + 1;
		}
		second_num = first_num++ + 1;
	}
}

void	ft_putchar(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (ft_is_last(first, second, third))
		write(1, ", ", 2);
}

int	ft_is_last(char first, char second, char third)
{
	if (first == '7' && second == '8' && third == '9')
		return (0);
	return (1);
}
