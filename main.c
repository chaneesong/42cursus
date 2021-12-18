/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:38 by chsong            #+#    #+#             */
/*   Updated: 2021/12/18 01:11:17 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include "ft_printf.h"
#include <unistd.h>

int	main()
{
	// char tmp[2] = "%%";
	// char format[10] = "cspdiuxX%\0";

	ft_printf("asd%-#+.1000d\n");

	return 0;
}