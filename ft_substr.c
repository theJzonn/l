/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 22:51:42 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 22:51:55 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	res_size;

	res = NULL;
	if (s != NULL)
	{
		res_size = ft_strlen(s);
		if (len > res_size)
			len = res_size;
		if (start > res_size)
			start = (unsigned int)res_size;
		if (start + len > res_size)
			len = res_size - start;
		res = (char *)malloc(sizeof(char) * (len + 1));
		if (res != NULL)
		{
			ft_memmove(res, s + start, len);
			res[len] = '\0';
		}
	}
	return (res);
}
