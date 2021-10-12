/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:00:45 by chsong            #+#    #+#             */
/*   Updated: 2021/10/12 21:13:30 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char num1, char num2);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;

	num1 = '0';
	while (num1 <= '9')
	{
		num2 = '0';
		while (num2 <= '9')
		{
			ft_putchar(num1, num2);
			num2++;
		}
		num1++;
	}
}
