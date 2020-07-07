/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:26:51 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/23 20:38:26 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	i = -1;
	if (!s || !f)
		return (NULL);
	if (!(s1 = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[++i])
		s1[i] = f(i, s[i]);
	return (s1);
}