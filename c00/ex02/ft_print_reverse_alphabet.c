/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:58:14 by chsong            #+#    #+#             */
/*   Updated: 2021/10/12 09:30:11 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
