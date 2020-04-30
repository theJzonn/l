/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 22:52:31 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/30 15:25:38 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned	int	i;
	unsigned	int	j;
	char			*res;

	if (!s1 || !s2)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		*(res + i) = *(s1 + i);
		i++;
	}
	while (s2[j])
	{
		*(res + i++) = *(s2 + j);
		j++;
	}
	return (res);
}
