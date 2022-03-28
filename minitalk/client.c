/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:19:30 by chsong            #+#    #+#             */
/*   Updated: 2022/03/28 22:26:20 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_signal(int pid, int signal)
{
	if (kill(pid, signal) == -1)
	{
		ft_putstr("Send Error\n");
		exit(1);
	}
}

static void	send_char(int pid, int c, int i)
{
	if (i == 8)
		return ;
	send_char(pid, c / 2, ++i);
	if (c % 2 == 0)
		send_signal(pid, SIGUSR1);
	else
		send_signal(pid, SIGUSR2);
	usleep(500);
}

static void	send_end_line(int pid)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		send_signal(pid, SIGUSR1);
		usleep(500);
	}
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
		send_char(pid, argv[2][i], 0);
	send_end_line(pid);
	return (0);
}
