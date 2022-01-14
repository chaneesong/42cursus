/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:38 by chsong            #+#    #+#             */
/*   Updated: 2022/01/14 13:09:27 by chsong           ###   ########.fr       */
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

int	main()
{
	// int a = 0xabc + 1;
	// int b = 2748 + 1;
	// char *tmp;
	// int a = 123;
	int c;

	// ft_print_hex(123);
	// tmp = ft_itoa(a);
	// free(tmp);
	// print_exam(4, 123, 123.123, 'c', "asdasd");
	// ft_printf("%d\n%c\n%s\n", 123, 'c', "asdasd");
	// c = printf("%p", &a);
	c = ft_printf("%X %d\n", 123, 123);
	printf("%d\n", c);
	return 0;
}
