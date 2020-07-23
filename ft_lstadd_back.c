/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:10:47 by otsoy             #+#    #+#             */
/*   Updated: 2020/07/19 14:53:14 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_new;

	if (lst == NULL || new == NULL)
	return (NULL);
	if (lst == NULL)
	{
		*lst == new;
		return (NULL);
	}
	last_new =ft_lstlast(*lst);
	last_new->next = new;
}