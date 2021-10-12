/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:42:22 by chsong            #+#    #+#             */
/*   Updated: 2021/10/12 15:44:39 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char first, char second, char third);
void	ft_print_comb(void);

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
