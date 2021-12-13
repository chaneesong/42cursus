/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:38 by chsong            #+#    #+#             */
/*   Updated: 2021/12/13 20:39:56 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>

int test(int cnt, ...)
{
	int result = 0;
	va_list arg_lst;

	va_start(arg_lst, cnt);
	for (int i = 0; i < cnt; i++)
		result += va_arg(arg_lst, int);
	va_end(arg_lst);
	return (result);
}

int	main()
{
	printf("%2147483646d", 100);
	return 0;
}