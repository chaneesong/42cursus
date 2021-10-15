/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:17:24 by chsong            #+#    #+#             */
/*   Updated: 2021/10/15 01:13:31 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	cur_alpha;

	cur_alpha = 'a';
	while (cur_alpha <= 'z')
	{
		ft_putchar(cur_alpha);
		cur_alpha++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
