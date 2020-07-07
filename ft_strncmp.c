/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:29:39 by otsoy             #+#    #+#             */
/*   Updated: 2020/06/22 21:28:19 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		r = (unsigned int)((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (r != 0)
			return (r);
		i++;
	}
	return (r);
}