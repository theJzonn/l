void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned char			*dst2;
	const unsigned char		*src2;
	unsigned int			i;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (dst2[i] == (unsigned char)c)
			return ((unsigned char*)(dst + i + 1));
		i++;
	}
	return (0);
}