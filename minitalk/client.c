/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:19:30 by chsong            #+#    #+#             */
/*   Updated: 2022/03/27 16:02:46 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_char_signal(int pid, int c)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (c % 2 == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c = c / 2;
	}
}

static void	send_end_signal(int pid)
{
	int	i;

	i = -1;
	while (++i < 8)
		kill(pid, SIGUSR1);
}

int main(int argc, char **argv)
{
	int	pid;
	int	i;

	if (argc != 3)
	{
		ft_putstr("Sending of Way : ./client [pid] [msg]\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	ft_putstr(argv[1]);
	i = -1;
	while (argv[2] && argv[2][++i])
		send_char_signal(pid, argv[2][i]);
	send_end_signal(pid);
	return (0);
}
