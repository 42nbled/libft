/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:22:22 by nbled             #+#    #+#             */
/*   Updated: 2022/06/24 12:22:22 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dst;

	size *= nmemb;
	dst = malloc(size);
	if (!dst)
		return (NULL);
	while (size > 0)
	{
		dst[size] = 0;
		size--;
	}
	return ((void *)dst);
}
