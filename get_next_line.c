/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 11:57:46 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-30 11:57:46 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *str)
{
	size_t	i;
	char	*line;

	while (str[i] != '\0' || str[i] != '\n')
		i++;
	if (str[i] == '\n')
		line = (char *)ft_calloc((i + 2), sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*rest_line(char *str)
{
	size_t	i;
	size_t	j;
	char	*newline;

	i = 0;
	while (str[i] && str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	newline = ft_calloc((ft_strlen(str) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (str[i])
		newline[j++] = str[i++];
	newline = '\0';
	free (str);
	return (newline);
}

char	*read_file(int fd, char *str)
{
	char	*buffer;
	int		count;

	buffer = ft_calloc(((BUFFER_SIZE + 1)), sizeof(char));
	if (!buffer)
		return (NULL);
	count = 1;
	while (count != 0)
	{
		count = read(fd, buffer, BUFFER_SIZE);
		if (count < 0 )
		{
			free(buffer);
			free(str);
			return (NULL);
		}
		buffer[count] = '\0';
		if (!str)
			str = ft_strdup("");
		str = ft_strjoin(str, buffer);
		if (ft_strchr(str, '\n'))
			break ;
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char		*str;
	char			*reader;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = read_file(fd, str);
	if (!str)
		return (NULL);
	if (str[0] == '\0')
	{
		free(str);
		return (NULL);
	}
	reader = extract_line(str);
	if (!reader)
		return (NULL);
	str = rest_line(str);
	return (reader);
}
