/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:51:59 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/01 15:52:01 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t size;

    i = 0;
    size = 0;
    if (!dst)
        return (0);
    while (src[size])
        size++;
    if (!dstsize)
        return (size);
    while (src[i] && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (size);
}
