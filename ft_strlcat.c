/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:08:41 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/28 21:22:57 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	size_t			dest_s;
	size_t			src_s;

	i = 0;
	dest_s = ft_strlen(dest);
	src_s = ft_strlen(src);
	if (size == 0)
		return (src_s);
	if (dest_s >= size)
		return (src_s + size);
	size = size - dest_s;
	while (src[i] != '\0' && size != 1)
	{
		dest[dest_s + i] = src[i];
		i++;
		size--;
	}
	dest[dest_s + i] = '\0';
	return (dest_s + src_s);
}
