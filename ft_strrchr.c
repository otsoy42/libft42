/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:53:00 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/01 15:53:02 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	char	*sc;
	char	cc;

	sc = (char *)s;
	cc = (char)c;
	r = NULL;
	while (*sc)
	{
		if (*sc == cc)
			r = sc;
		sc++;
	}
	if (*sc == cc)
		r = sc;
	return (r);
}