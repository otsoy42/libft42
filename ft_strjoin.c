/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 18:45:02 by otsoy             #+#    #+#             */
/*   Updated: 2020/06/22 22:20:27 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	r = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!r)
		return (NULL);
	ft_strcpy(r, s1);
	ft_strcat(r, s2);
	return (r);
}