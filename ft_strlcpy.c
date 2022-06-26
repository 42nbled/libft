/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:24:11 by nbled             #+#    #+#             */
/*   Updated: 2022/06/24 12:24:11 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strsize_t(const char *s)
{
	size_t	*i;
	int		j;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	while (s[j])
	{
		i++;
		j++;
	}
	return (i);
}

size_t	*ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < size)
		dst[i++] = '\0';
	return (ft_strsize_t(dst));
}
