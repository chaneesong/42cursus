/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:19:23 by chsong            #+#    #+#             */
/*   Updated: 2022/03/27 16:39:48 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void sig_usr1(int signo){
	if (signo == SIGUSR1)
		printf("0\n");
}

static void sig_usr2(int signo){
	if (signo == SIGUSR2)
		printf("1\n");
}

int main(void){
	int a = 0;
	printf("%d\n", getpid());
	signal(SIGUSR1, sig_usr1);
	signal(SIGUSR2, sig_usr2);
	printf("%d\n", a);
	a++;
	while (1)
		usleep(150);
}
