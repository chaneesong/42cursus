/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:02:39 by chsong            #+#    #+#             */
/*   Updated: 2021/10/27 20:11:47 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cur;

	cur = 2;
	while (cur * cur <= nb)
	{
		if (nb % cur == 0)
			return (0);
		cur++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb < 2147483647 && !(ft_is_prime(nb)))
		nb++;
	return (nb);
}
