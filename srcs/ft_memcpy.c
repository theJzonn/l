void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char	*s1;
	char	*s2;

	if (n == 0 || dest == src)
		return (dest);
	s1 = (char *)dest;
	s2 = (char *)src;
	while (--n)
		*s1++ = *s2++;
	*s1 = *s2;
	return (dest);
}