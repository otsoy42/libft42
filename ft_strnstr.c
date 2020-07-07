/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:45:38 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/02 20:28:48 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *need, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!need)
		return ((char *)h);
	while (h[i] && i < len)
	{
		while (h[i + j] == need[j] && i + j < len)
			j++;
		if (need [j] == '\0')
			return ((char *)&h[i]);
		i++;
		j = 0;
	}
	return (NULL);
}