/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:24:05 by nbled             #+#    #+#             */
/*   Updated: 2022/07/01 11:23:13 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (!dst && !src)
		return (ft_strlen(src));
	if (i > size)
		return (ft_strlen(src) + size);
	while (src[j] && (i + j) < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (size)
		dst[i + j] = '\0';
	if (i < size)
		return (i + ft_strlen(src));
	return (ft_strlen(src) + size);
}
