/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 22:51:05 by jricafor          #+#    #+#             */
/*   Updated: 2020/05/01 22:55:15 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *res;

	if (!lst)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	res = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = ft_lstnew((*f)(lst->content))))
			return (NULL);
		new = new->next;
	}
	return (res);
}
