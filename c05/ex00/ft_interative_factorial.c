/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:00:40 by chsong            #+#    #+#             */
/*   Updated: 2021/10/22 16:00:41 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
