/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:34:21 by chsong            #+#    #+#             */
/*   Updated: 2021/10/25 23:44:03 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int *board)
{
	int		i;
	char	c;

	i = -1;
	while (++i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
	}
}

int	ft_is_possible_insert(int cur, int *board)
{
	int	i;

	i = -1;
	while (++i < cur)
	{
		if (board[cur] == board[i] || cur - i == board[cur] - board[i]
			|| -(cur - i) == board[cur] - board[i])
			return (0);
	}
	return (1);
}

void	ft_search_ten_queen(int cur, int *cnt, int *board)
{
	int	i;
	int	j;

	if (cur == 10)
	{
		j = -1;
		ft_putstr(board);
		write(1, "\n", 1);
		*cnt += 1;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		board[cur] = i;
		if (ft_is_possible_insert(cur, board))
			ft_search_ten_queen(cur + 1, cnt, board);
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	cnt;
	int	board[10];

	cnt = 0;
	ft_search_ten_queen(0, &cnt, board);
	return (cnt);
}
