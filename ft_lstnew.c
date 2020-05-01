/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 18:50:43 by jricafor          #+#    #+#             */
/*   Updated: 2020/05/01 19:18:36 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	tmp->content = content;
	tmp->next = 0;
	return (tmp);
}
