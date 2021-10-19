unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	int	dest_cnt;
	unsigned int	src_cnt;

	dest_cnt = 0;
	while (*(dest + dest_cnt))
		dest_cnt++;
	res = 0;
	while (*(src + res))
		res++;
	src_cnt = 0;
	while (src_cnt < size - 1)
	{
		*(dest + dest_cnt) = *(src + src_cnt);
		dest_cnt++;
		src_cnt++;
	}
	*(dest + dest_cnt) = '\0';
	return (res);
}
