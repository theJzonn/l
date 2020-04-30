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

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*res;
	size_t	str_size;

	res = NULL;
	if (str != NULL)
	{
		str_size = ft_strlen(str);
		if (len > str_size)
			len = str_size;
		if (start > str_size)
			start = (unsigned int)str_size;
		if (start + len > str_size)
			len = str_size - start;
		res = (char *)malloc(sizeof(char) * (len + 1));
		if (res != NULL)
		{
			ft_memmove(res, str + start, len);
			res[len] = '\0';
		}
	}
	return (res);
}
