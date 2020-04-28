/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <jricafor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 22:53:16 by jricafor          #+#    #+#             */
/*   Updated: 2020/04/27 22:53:18 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_is_charset(char c, char charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		ft_find_wc(char *str, char *charset)
{
	int i;
	int mots;

	i = 0;
	if (!str[i])
		return (0);
	mots = 1;
	while (str[i + 1] != '\0')
	{
		if (i == 0)
			i++;
		if (i != 0 && ft_is_charset(str[i], charset)
				&& !ft_is_charset(str[i + 1], charset))
			mots++;
		i++;
	}
	return (mots);
}

static char	*ft_remplir(char *str, int size_word, int i)
{
	int		x;
	char	*res;

	x = 0;
	res = malloc(sizeof(char) * (size_word + 1));
	while (x < size_word)
	{
		res[x] = str[i];
		x++;
		i++;
	}
	res[x] = '\0';
	return (res);
}

static int		ft_spliting(char const *str, char charset, char **tab)
{
	int		i;
	int		y;
	int		size_word;

	i = 0;
	y = 0;
	while (str[i] != '\0')
	{
		size_word = 0;
		while (!ft_is_charset(str[i], charset) && str[i] != '\0')
		{
			size_word++;
			i++;
		}
		if (size_word != 0)
		{
			if (!(tab[y] = malloc(sizeof(char) * (size_word + 1))))
				return (0);
			tab[y] = ft_remplir(str, size_word, i - size_word);
			y++;
		}
		i++;
	}
	tab[y] = 0;
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s[0])
		return (0);
	if (!(tab = malloc(sizeof(char *) * (ft_find_wc(s, c) + 1))))
		return (NULL);
	ft_spliting(s, c, tab);
	return (tab);
}