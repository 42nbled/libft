/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:24:33 by nbled             #+#    #+#             */
/*   Updated: 2022/06/24 12:24:33 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtrim_start(char const *s1, char const *set)
{
	int	cond_start;

	cond_start = 0;
	while (set[cond_start] && cond_start >= 0)
	{
		if (s1[cond_start] == set[cond_start])
			cond_start++;
		else
			cond_start = -1;
	}
	if (cond_start > 0)
		return (cond_start);
	else
		return (0);
}

int	ft_strtrim_end(char const *s1, char const *set)
{
	int	cond_end;
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(s1);
	size -= ft_strlen(set);
	cond_end = 0;
	while (set[cond_end] && cond_end >= 0)
	{
		if (s1[size] == set[i])
		{
			cond_end++;
			i++;
		}
		else
			cond_end = -1;
		size++;
	}
	if (cond_end > 0)
		return (cond_end);
	else
		return (0);
}

char	*ft_strtrim_suite(char const *s1, char const *set, int start, int end)
{
	char	*str;
	int		size;
	int		i[3];

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	size = ft_strlen(s1);
	str = malloc(sizeof(char) * (size - start - end + 1));
	while (i[0] < size - start - end)
	{
		if (start > 0 && set[i[1]])
			i[1]++;
		else if (end > 0 && i[0] > size - end && set[i[2] - 1])
			i[2]++;
		else
		{
			str[i[0]] = s1[i[0] + i[1] + i[2]];
			i[0]++;
		}
	}
	str[i[0]] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	cond_start;
	int	cond_end;

	cond_start = ft_strtrim_start(s1, set);
	cond_end = ft_strtrim_end(s1, set);
	return (ft_strtrim_suite(s1, set, cond_start, cond_end));
}
