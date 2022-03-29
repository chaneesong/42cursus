/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:19:23 by chsong            #+#    #+#             */
/*   Updated: 2022/03/29 09:33:07 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

static void sig_usr(int signo){
	static int	num;
	static int	cnt;

	if (signo == SIGUSR1)
		num = (num << 1);
	else
		num = (num << 1) | 1;
	cnt++;
	if (cnt == 8 && num)
	{
		ft_putchar(num);
		cnt = 0;
		num = 0;
	}
	else if (cnt == 8)
	{
		ft_putchar('\n');
		cnt = 0;
		num = 0;
	}
}

int main(void){
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, sig_usr);
	signal(SIGUSR2, sig_usr);
	while (1)
		pause();
}
