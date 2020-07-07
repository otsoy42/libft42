/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:14:42 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/02 17:38:39 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c)
{
    if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
        return (1);
    else
        return (0);
}