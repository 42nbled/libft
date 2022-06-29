/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:24:24 by nbled             #+#    #+#             */
/*   Updated: 2022/06/24 12:24:24 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] != '\0' && little[j] != '\0' && i < len)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (little[j] == '\0')
		return ((char *)big +(i - j));
	else
		return (0);
}
