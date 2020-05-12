/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:01:37 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 17:01:44 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	while (str[i] != c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return ((char*)str + i);
}
