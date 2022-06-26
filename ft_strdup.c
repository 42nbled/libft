/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:23:54 by nbled             #+#    #+#             */
/*   Updated: 2022/06/24 12:23:54 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
