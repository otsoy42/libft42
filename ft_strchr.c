/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:42:27 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/01 15:45:22 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t 	i;
	char 	*ss;
	char 	cc;

	i = 0;
	ss = (char *)s;
	cc = (char)c;
	while (ss[i] != '\0' && ss[i] != cc)
		i++;
	if (ss[i] == cc)
		return(ss + i);
	return (NULL);
}