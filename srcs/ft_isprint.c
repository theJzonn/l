int		ft_isprint(char c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
}