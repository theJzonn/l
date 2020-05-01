/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 22:25:30 by jricafor          #+#    #+#             */
/*   Updated: 2020/05/01 22:39:38 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *lst;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		ft_lstdelone(tmp1, (*del));
		tmp1 = tmp2;
	}
	*lst = NULL;
}
