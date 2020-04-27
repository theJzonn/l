/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 16:47:36 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 16:48:21 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	const unsigned char	*src2;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst2 = (unsigned char*)dst;
	src2 = (const unsigned char*)src;
	if (src2 < dst2)
	{
		while (len > 0)
		{
			len--;
			dst2[len] = src2[len];
		}
	}
	else
		ft_memcpy(dst2, src2, len);
	return (dst);
}
