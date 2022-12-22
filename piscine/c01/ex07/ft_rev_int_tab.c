/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:35:27 by chsong            #+#    #+#             */
/*   Updated: 2021/10/15 22:35:28 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	offset;
	int	temp;

	offset = 0;
	while (offset < size / 2)
	{
		temp = tab[offset];
		tab[offset] = tab[size - offset - 1];
		tab[size - offset - 1] = temp;
		offset++;
	}
}
