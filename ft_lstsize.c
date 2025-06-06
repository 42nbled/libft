/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:23:12 by nbled             #+#    #+#             */
/*   Updated: 2022/07/01 11:25:39 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*v;
	int		i;

	if (!lst)
		return (0);
	i = 0;
	v = lst;
	while (v)
	{
		v = v->next;
		i++;
	}
	return (i);
}
