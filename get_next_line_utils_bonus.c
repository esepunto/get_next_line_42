/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 11:47:11 by ssacrist          #+#    #+#             */
/*   Updated: 2020/07/30 11:47:14 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strdup(const char *s1)
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		tab[i] = *((char *)s1);
		i++;
		s1++;
	}
	tab[i] = '\0';
	return (tab);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1 != '\0')
		dest[i++] = *s1++;
	while (*s2 != '\0')
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr(const char *string_to_search, int character_to_find)
{
	while (*string_to_search)
	{
		if (*string_to_search == character_to_find)
			return ((char*)string_to_search);
		string_to_search++;
	}
	if (character_to_find == '\0')
		return ((char*)string_to_search);
	return (0);
}
