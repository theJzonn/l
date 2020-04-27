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

int		ft_atoi(char *str)
{
	int nb;
	int i;
	int negatifs;

	i = 0;
	nb = 0;
	negatifs = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatifs++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (negatifs % 2 != 0)
		nb = -nb;
	return (nb);
}
