/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:16:36 by chsong            #+#    #+#             */
/*   Updated: 2021/10/14 14:48:36 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_combination(int numbers[], int depth, int start, int n);
void	ft_putchar(int arr[], int n);
int		ft_is_last(int arr[], int n);

void	ft_print_combn(int n)
{
	int	arr[9];

	ft_combination(arr, 0, 0, n);
}

void	ft_combination(int numbers[], int depth, int start, int n)
{
	if (depth == n)
	{
		ft_putchar(numbers, n);
		return ;
	}
	while (start <= 9)
	{
		numbers[depth] = start;
		ft_combination(numbers, depth + 1, start + 1, n);
		start++;
	}
}

void	ft_putchar(int arr[], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = '0' + arr[i];
		write(1, &c, 1);
		i++;
	}
	if (ft_is_last(arr, n))
		return ;
	write(1, ", ", 2);
}

int	ft_is_last(int arr[], int n)
{
	int	i;
	int	p;

	i = 0;
	p = 1;
	while (i < n)
	{
		if (arr[i] != 9 - n + i + 1)
		{
			p = 0;
			break ;
		}
		i++;
	}
	return (p);
}
