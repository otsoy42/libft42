/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:47:57 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/02 17:30:38 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dst, int c, size_t n)
{
	unsigned const char *st;

	st = (unsigned char *)dst;
	while (n-- > 0)
	{
		if (*st == (unsigned char)c)
			return ((void*)st);
		st++;
	}
	return (NULL);
}