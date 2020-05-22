/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:00:59 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 17:01:06 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)s + i);
}
