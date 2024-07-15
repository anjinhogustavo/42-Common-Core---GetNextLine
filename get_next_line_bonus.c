/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-12 10:13:30 by ganjinho          #+#    #+#             */
/*   Updated: 2024-07-12 10:13:30 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
		line[i] == str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_newstr(char *str)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	while (str && str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	word = ft_calloc((ftstrlen(str) - i + 1), sizeof(char));
	if (!word)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		word[j++] = str[i++];
	word[j] = '\0';
	free(str);
	return (word);
}

char	*readfile(int fd, char *str)
{
	char	*buffer;
	int		counter;

	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	counter = 1;
	while (counter != 0)
	{
		counter = read(fd, buffer, BUFFER_SIZE);
		if (counter < 0)
		{
			free(buffer);
			free(str);
			return (NULL);
		}
		buffer[counter] = '\0';
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
	static char		*str[4096];
	char			*reader;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str[fd] = readfile(fd, str[fd]);
	if (!str[fd])
		return (NULL);
	if (str[fd][0] == '\0')
	{
		free(str[fd]);
		return (NULL);
	}
	reader = extract_line(str[fd]);
	if (!reader)
		return (NULL);
	str[fd] = ft_newstr(str[fd]);
	return (reader);
}

/* #include <stdio.h>
int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
} */