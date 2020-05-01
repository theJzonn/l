/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:22:11 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 21:22:20 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		ft_atoi(char *str)
{
	int nb;
	int i;
	int negatif;

	i = 0;
	nb = 0;
	negatif = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatif = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (nb < 0 && negatif > 0)
		return (-1);
	else if (nb < 0 && negatif < 0 && nb * negatif != -2147483648)
		return (0);
	return (nb * negatif);
}
