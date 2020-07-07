/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:47:14 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/01 15:47:35 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void * dest, const void *src, int c, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned const char *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned const char *)src;
    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == (unsigned char)c)
        return ((void *)(d + i + 1));
        i++;
    }
    return (NULL);
}