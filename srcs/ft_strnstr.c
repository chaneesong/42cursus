/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:38:35 by chsong            #+#    #+#             */
/*   Updated: 2021/11/19 19:49:34 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	if (!needle && !len)
		return (NULL);
	i = 0;
	len_needle = ft_strlen(needle);
	if (!len_needle)
		return ((char *)haystack);
	while (haystack[i] && len && len_needle <= len)
	{
		if (ft_strncmp(&haystack[i], needle, len_needle) == 0)
			return ((char *)&haystack[i]);
		len--;
		i++;
	}
	return (NULL);
}
