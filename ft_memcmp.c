/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:48:27 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/01 15:48:28 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void*s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (n-- > 0)
    {
        if (*str1 != *str2)
            return ((int)(*str1 - *str2));
        str1++;
        str2++;
    }
    return (0);
}