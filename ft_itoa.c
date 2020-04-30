/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 22:53:46 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 22:53:48 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_len(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		size = 1;
	}
	if (nb / 10 == 0)
		return (size + 1);
	else
		nb = nb / 10;
	return (size + ft_len(nb) + 1);
}

char			*ft_itoa(int n)
{
	char			*res;
	unsigned int	i;
	size_t			len;
	long			nb;

	nb = n;
	len = ft_len(nb);
	if (!(res = (char *)malloc(sizeof(*res) * (len + 1))))
		return (NULL);
	res[len--] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		res[0] = '-';
	}
	if (nb == 0)
		res[len] = '0';
	i = 0;
	while (i <= len && nb > 0)
	{
		res[len - i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	return (res);
}