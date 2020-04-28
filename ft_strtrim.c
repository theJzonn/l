/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 22:53:01 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 22:53:05 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (ft_is_charset(s1[start], set))
		start++;
	while (ft_is_charset(s1[end], set) && ft_is_charset(s1[end], set))
		end--;
	if (!ft_is_charset(s1[end], set))
		end++;
	if (start == ft_strlen(s1))
		return ("");
	if (!(res = (char *)malloc(sizeof(char) * ((end - start) + 1))))
		return (NULL);
	i = 0;
	while (start != end && s1[start])
	{
		res[i] = s1[start];
		start++;
		i++;
	}
	return (res);
}
*/

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
