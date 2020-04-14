#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	while (str[i] != c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return ((char*)str + i);
}