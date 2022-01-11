/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:38 by chsong            #+#    #+#             */
/*   Updated: 2022/01/12 03:06:59 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include "ft_printf.h"
#include <unistd.h>

void	print_exam(int args, ...)
{
	va_list ap;

	va_start(ap, args);
	printf("%d\n", va_arg(ap, int));
	printf("%f\n", va_arg(ap, double));
	printf("%c\n", va_arg(ap, int));
	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}

static void	ft_print_recur(int num)
{
	if (num == 0)
		return ;
	if (num > 0)
		ft_print_recur(num / 16);
	if (num % 16 < 10)
		ft_putchar_fd((num % 16) + '0', 1);
	else
		ft_putchar_fd((num % 16) - 10 + 'a', 1);
}

int		ft_print_hex(int n)
{
	int		num;

	num = n;
	ft_print_recur(num);
	return (0);
}

int	main()
{
	// int a = 0xabc + 1;
	// int b = 2748 + 1;
	// char *tmp;

	ft_print_hex(123);
	// tmp = ft_itoa(a);
	// free(tmp);
	// print_exam(4, 123, 123.123, 'c', "asdasd");
	// ft_printf("%0*dprint1%cprint2%sprint3", 123, 15, 'c', "asdasd", 123.123);
	return 0;
}
