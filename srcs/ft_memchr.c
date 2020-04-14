void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char	*s2;
	unsigned int	i;

	s2 = (char*)s;
	i = 0;
	while (i < n)
	{
		if (s2[i] == c)
			return ((char*)s + i);
		i++;
	}
	return (0);
}