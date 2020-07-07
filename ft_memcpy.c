/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:46:00 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/01 15:46:23 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
    const char *s;
    size_t i;

    if (!dest && !src)
    return (0);
    d = dest;
    s = src;
    i = 0;
    while (i < n)
    {
        d[i] =s[i];
        i++;
    }
    return (dest);
}