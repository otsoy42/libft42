/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:50:03 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/02 17:31:44 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*r;
	size_t	i;
	size_t	l;

	l = ft_strlen(s1);
	r = ft_strnew(l);
	if (!r)
		return (NULL);
	i = 0;
	while (i < l)
	{
		r[i] = s1[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}