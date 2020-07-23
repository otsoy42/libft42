/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:27:42 by otsoy             #+#    #+#             */
/*   Updated: 2020/07/19 18:38:01 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *newone;
	t_list *next;

	newone = *lst;
	while (newone)
	{
		next = newone->next;
		ft_lstdelone(newone, del);
		newone = next;
	}
	*lst = NULL;
}