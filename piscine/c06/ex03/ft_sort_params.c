/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:18:57 by chsong            #+#    #+#             */
/*   Updated: 2021/10/23 21:33:49 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(int cnt, char **params)
{
	int	cur;
	int	i;

	cur = 1;
	while (cur <= cnt)
	{
		i = 0;
		while (params[cur][i])
		{
			ft_putchar(params[cur][i]);
			i++;
		}
		write(1, "\n", 1);
		cur++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;

	cnt = 0;
	if (!*s1 && !*s2)
		return (0);
	if (!*s1)
		return (-(*s2));
	if (!*s2)
		return (*s1);
	while (*(s1 + cnt) && *(s2 + cnt))
	{
		if (*(s1 + cnt) != *(s2 + cnt))
			break ;
		cnt++;
	}
	return (*(s1 + cnt) - *(s2 + cnt));
}

void	ft_sort_params(int end, char **argv)
{
	int		start;
	int		cur;
	char	*temp;

	start = 1;
	while (start < end - 1)
	{
		cur = start + 1;
		while (cur < end)
		{
			if (ft_strcmp(argv[start], argv[cur]) > 0)
			{
				temp = argv[start];
				argv[start] = argv[cur];
				argv[cur] = temp;
			}
			cur++;
		}
		start++;
	}
	ft_print_params(end - 1, argv);
}

int	main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	return (0);
}
