/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:23:51 by nbled             #+#    #+#             */
/*   Updated: 2022/06/24 12:23:51 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

static int	ft_str_len(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i + j] && s[i + j] != c)
		j++;
	return (j);
}

static char	**free_all(char **s, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(s[j]);
		j++;
	}
	return (NULL);
}

int	ft_split_part_two(char const *s, char c, char *tab, int j)
{
	int	k;

	k = 0;
	while (s[j] && s[j] == c)
		j++;
	while (s[j] && s[j] != c)
		tab[k++] = s[j++];
	tab[k] = '\0';
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	while (i < ft_count_words(s, c))
	{
		tab[i] = malloc(ft_str_len(s + j, c) + 1);
		if (!tab[i])
			return (free_all(tab, i));
		ft_split_part_two(s, c, tab[i], j);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
