#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*tmp = dst;
	const char	*s = src;

	if (ft_strlen(dst) < n)
		return (dst);

	while (n--)
		*tmp++ = *s++;
	return (dst);
}