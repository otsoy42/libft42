/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:21:18 by otsoy             #+#    #+#             */
/*   Updated: 2020/07/15 20:36:58 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*n_list;
	
	if(!(n_list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	else
	{
		n_list->content = content;
		n_list->next = NULL;
	}
	return (n_list);	
}