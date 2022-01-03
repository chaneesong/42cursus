/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:38 by chsong            #+#    #+#             */
/*   Updated: 2022/01/03 21:42:50 by chsong           ###   ########.fr       */
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
	// print_exam(4, 123, 123.123, 'c', "asdasd");
	ft_printf("%nmb.d%c%s%p%u%%", 123, 'c', "asdasd", 123.123);
	return 0;
}