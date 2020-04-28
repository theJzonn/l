/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:09:29 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 17:09:37 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(unsigned int nmemb, size_t size)
{
	char	*ptr;

	ptr = NULL;
	if (!(ptr = (char*)malloc(sizeof(*ptr) * (nmemb * size))))
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
