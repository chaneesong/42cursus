/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:21:19 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 16:21:23 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str && *str)
	{
		str++;
		len++;
	}
	return (len);
}

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	char	*result;
// 	size_t	len;
// 	size_t	index;

// 	index = 0;
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	result = (char *)malloc(sizeof(char) * (len + 1));
// 	while (s1 && *s1)
// 	{
// 		result[index] = *s1;
// 		s1++;
// 		index++;
// 	}
// 	while (s2 && *s2)
// 	{
// 		result[index] = *s2;
// 		s2++;
// 		index++;
// 	}
// 	result[index] = '\0';
// 	return (result);
// }