/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:34:51 by chsong            #+#    #+#             */
/*   Updated: 2021/10/15 22:37:05 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	offset;
	int	cur;
	int	temp;

	offset = 0;
	while (offset <= size)
	{
		cur = offset + 1;
		while (cur <= size)
		{
			if (tab[offset] > tab[cur])
			{
				temp = tab[offset];
				tab[offset] = tab[cur];
				tab[cur] = temp;
			}
			cur++;
		}
		offset++;
	}
}
