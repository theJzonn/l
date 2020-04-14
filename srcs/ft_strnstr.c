char	*ft_strnstr(const char * s1, const char * s2, unsigned int  len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (s2[i] == 0)
		return ((char*)s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		if (s1[i] != s2[j])
			i++;
		else
		{
			while (s2[j] != '\0' && s1[i] == s2[j] && i < len)
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return ((char*)s1 + i - j);
			i++;
		}
	}
	return (0);
}