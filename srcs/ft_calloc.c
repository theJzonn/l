#include "../includes/libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	char	*ptr;

	ptr = NULL;
	if (!(ptr = (char*)malloc(sizeof(*ptr) * (nmemb * size))))
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}