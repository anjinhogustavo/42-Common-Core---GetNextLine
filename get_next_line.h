/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_Line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 11:55:44 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-30 11:55:44 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#	define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *str);
char	*extract_line(char *str);
char	*rest_line(char *str);
char	*read_file(int fd, char *str);
char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(char *s);

#endif
