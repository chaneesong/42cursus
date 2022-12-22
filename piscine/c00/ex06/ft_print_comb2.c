/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sch <chsong@student.42seoul.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 01:10:25 by sch               #+#    #+#             */
/*   Updated: 2021/10/15 11:50:32 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char fir_n1, char fir_n2);
void	ft_print_comb2(void);
void	ft_putchar(char fir_n1, char fir_n2, char sec_n1, char sec_n2);

void	ft_print_comb2(void)
{
	char	fir_n1;
	char	fir_n2;

	fir_n1 = '0';
	fir_n2 = '0';
	while (fir_n1 <= '9' && fir_n2 <= '9')
	{
		ft_print_numbers(fir_n1, fir_n2);
		if (fir_n1 != '9' && fir_n2 == '9')
		{
			fir_n1++;
			fir_n2 = '0' - 1;
		}
		fir_n2++;
	}
}

void	ft_print_numbers(char fir_n1, char fir_n2)
{
	char	sec_n1;
	char	sec_n2;

	sec_n1 = fir_n1;
	sec_n2 = fir_n2;
	if (sec_n1 == fir_n1 && sec_n2 == fir_n2 && sec_n2 == '9')
	{
		sec_n1++;
		sec_n2 = '0';
	}
	else
		sec_n2++;
	while (sec_n1 <= '9' && sec_n2 <= '9')
	{
		ft_putchar(fir_n1, fir_n2, sec_n1, sec_n2);
		if (sec_n1 != '9' && sec_n2 == '9')
		{
			sec_n1++;
			sec_n2 = '0' - 1;
		}
		sec_n2++;
	}
}

void	ft_putchar(char fir_n1, char fir_n2, char sec_n1, char sec_n2)
{
	write(1, &fir_n1, 1);
	write(1, &fir_n2, 1);
	write(1, " ", 1);
	write(1, &sec_n1, 1);
	write(1, &sec_n2, 1);
	if (fir_n1 != '9' || fir_n2 != '8' || sec_n1 != '9' || sec_n2 != '9')
		write(1, ", ", 2);
}
