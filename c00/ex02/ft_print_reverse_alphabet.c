/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:58:14 by chsong            #+#    #+#             */
/*   Updated: 2021/10/14 11:39:04 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void);
void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	cur_alpha;

	cur_alpha = 'z';
	while (cur_alpha >= 'a')
	{
		ft_putchar(cur_alpha);
		cur_alpha--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
