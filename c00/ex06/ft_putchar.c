/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:54:44 by chsong            #+#    #+#             */
/*   Updated: 2021/10/12 19:16:39 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char num1, char num2);

void	ft_putchar(char num1, char num2)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, " ", 1);
}
