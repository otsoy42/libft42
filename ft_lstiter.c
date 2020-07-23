/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 23:41:46 by otsoy             #+#    #+#             */
/*   Updated: 2020/07/20 23:57:14 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
	return (NULL);
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}