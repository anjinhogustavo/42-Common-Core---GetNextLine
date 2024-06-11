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
	int	i;

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
int	find_newline(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		return (1);
}

char	ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
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
	return (new);
}
