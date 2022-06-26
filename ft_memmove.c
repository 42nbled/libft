/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:23:27 by nbled             #+#    #+#             */
/*   Updated: 2022/06/24 12:23:27 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	else
		while (i++ < n)
			((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}
