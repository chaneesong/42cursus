#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*res;
	size_t			cnt;

	res = (unsigned char *)b;
	cnt = -1;
	while (++cnt < len)
		res[cnt] = (unsigned char)c;
	return (res);
}