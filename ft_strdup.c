/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:10:31 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/28 21:22:02 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strdup(char *src)
{
	unsigned int	i;
	size_t			size;
	char			*str;

	i = 0;
	size = ft_strlen(src);
	if (!(str = malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
