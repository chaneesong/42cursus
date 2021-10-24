/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:26:11 by chsong            #+#    #+#             */
/*   Updated: 2021/10/23 21:30:34 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	insert_queen(int **board, int *x, int *y)
{
	if (board[*x][*y] == 0)
	{
		board[*x][*y] = 2;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	x;
	int	y;
	int	board[10][10];

	x = -1;
	while (++x < 10)
	{
		y = -1;
		while (++y < 10)
		{
			board[x][y] = 0;
		}
	}
	x = 0;
	return (x);
}
