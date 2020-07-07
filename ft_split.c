/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otsoy <otsoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:46:02 by otsoy             #+#    #+#             */
/*   Updated: 2020/05/16 16:53:03 by otsoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		if (*str && *str != ' ' && *str != '\n' && *str != '\t')
		{
			count++;
			while (*str && *str != ' ' && *str != '\t' && *str != '\n')
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char *word;
	int i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int		words;
	char	**tab;
	int		i;

	words = count(str);
	tab = (char **)malloc(sizeof(char*) * (words + 1));
	i = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		if (*str && *str != ' ' && *str != '\t' && *str != '\n')
		{	
			tab[i] = malloc_word(str);
			i++;
			while (*str && *str != ' ' &&  *str != '\t' && *str != '\n')
				str++; 
		}
	}
	tab[i] = NULL;
	return (tab);
}