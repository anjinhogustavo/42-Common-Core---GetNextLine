/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-01 12:28:50 by ganjinho          #+#    #+#             */
/*   Updated: 2024-06-01 12:28:50 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(nitems * size);
	if (memory == NULL)
		return (0);
	while (i < nitems * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str && str[i] != (char)c)
	{
		if (!str[i])
			return (NULL);
		i++;
	}
	return ((char *)&str[i]);
}

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*new;

	new = ft_calloc(((ft_strlen((char *)s1) + ft_strlen((char *)s2))
				+ 1), sizeof(char));
	if (!new)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	free((void *)s1);
	return (new);
}

char	*ft_strdup(char *s)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
