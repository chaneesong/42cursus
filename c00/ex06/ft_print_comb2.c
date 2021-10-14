/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sch <chsong@student.42seoul.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 01:10:25 by sch               #+#    #+#             */
/*   Updated: 2021/10/14 21:42:04 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers(char num1, char num2);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;

	num1 = '0';
	num2 = '0';
	while (num1 <= '9' && num2 <= '9')
	{
		if (num1 == '9' && num2 == '9')
			return ;
		ft_print_numbers(num1, num2);
		write(1, "\n", 1);
		if (num2 == '9')
		{
			num1++;
			num2 = '0' - 1;
		}
		num2++;
	}
}
void	ft_print_numbers(char num1, char num2)
{
	char	n1;
	char	n2;

	n1 = num1;
	n2 = num2 + 1;
	while (n1 <= '9' && n2 <= '9')
	{
		write(1, &num1, 1);
		write(1, &num2, 1);
		write(1, " ", 1);
		write(1, &n1, 1);
		write(1, &n2, 1);
		if (num1 != '9' || num2 != '8' || n1 != '9' || n2 != '9')
			write(1, ", ", 2);
		n2++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return 0;
}
