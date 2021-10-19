char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_cnt;
	unsigned int	src_cnt;

	dest_cnt = 0;
	while (*(dest + dest_cnt))
		dest_cnt++;
	src_cnt = 0;
	while (src_cnt < nb)
	{
		*(dest + dest_cnt) = *(src + src_cnt);
		dest_cnt++;
		src_cnt++;
	}
	*(dest + dest_cnt) = '\0';
	return (dest);
}
