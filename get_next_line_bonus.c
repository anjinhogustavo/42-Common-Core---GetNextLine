/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-26 11:44:15 by ganjinho          #+#    #+#             */
/*   Updated: 2024-08-26 11:44:15 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
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
	int		i;
	int		j;
	char	*newline;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	newline = (char *)malloc((ft_strlen(str) - i + 1) * sizeof(char));
	if (!newline)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		newline[j++] = str[i++];
	newline[j] = '\0';
	free (str);
	return (newline);
}

char	*read_file(int file, char *str)
{
	char	*buffer;
	int		count;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	count = 1;
	while (!ft_strchr(str, '\n') && count != 0)
	{
		count = read(file, buffer, BUFFER_SIZE);
		if (count == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[count] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int file)
{
	static char		*str[257];
	char			*reader;

	if (file < 0 || BUFFER_SIZE <= 0 || file > 256)
		return (NULL);
	str[file] = read_file(file, str[file]);
	if (!str[file])
		return (NULL);
	reader = extract_line(str[file]);
	if (!reader)
		return (NULL);
	str[file] = rest_line(str[file]);
	return (reader);
}
