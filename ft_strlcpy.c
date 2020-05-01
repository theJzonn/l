/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:06:33 by jricafor          #+#    #+#             */
/*   Updated: 2020/05/01 19:32:29 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t		ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!src)
		return (0);
	while (size > 0 && src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
