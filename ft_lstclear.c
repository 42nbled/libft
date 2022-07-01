/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <nbled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:22:55 by nbled             #+#    #+#             */
/*   Updated: 2022/07/01 11:17:32 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*t;

	if (lst || del)
	{
		t = *lst;
		while (t)
		{
			ptr = t->next;
			ft_lstdelone(t, del);
			t = ptr;
		}
		ptr = NULL;
	}
}
