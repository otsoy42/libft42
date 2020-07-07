/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:44:59 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/01 15:45:04 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void *ptr;

    ptr = (void *)malloc(sizeof(void) * size);
    if (!ptr)
        return (NULL);
    else
        ft_bzero(ptr, size);
    return (ptr);
} 