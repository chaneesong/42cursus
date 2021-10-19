char	*ft_strcat(char *dest, char *src)
{
	int	dest_cnt;
	int	src_cnt;

	dest_cnt = 0;
	while (*(dest + dest_cnt))
		dest_cnt++;
	src_cnt = 0;
	while (*(src + src_cnt))
	{
		*(dest + dest_cnt) = *(src + src_cnt);
		dest_cnt++;
		src_cnt++;
	}
	return (dest);
}
