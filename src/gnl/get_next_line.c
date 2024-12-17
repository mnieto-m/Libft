/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:54:45 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/12/17 07:31:38 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static char	*set_line(char *str)
{
	int		i;
	int		j;
	char	*str_caract;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (!str[i])
		return (free(str), NULL);
	str_caract = malloc(sizeof(char) * ((ft_strlen(str) - i) + 1));
	if (!str_caract)
	{
		free(str);
		return (NULL);
	}
	j = 0;
	i++;
	while (str[i])
		str_caract[j++] = str[i++];
	str_caract[j] = '\0';
	return (free(str), str = NULL, str_caract);
}

static char	*take_line(char *str)
{
	char	*line;
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (!str[i])
		line = (char *)ft_calloc(i + 1, 1);
	else
		line = (char *)ft_calloc(i + 2, 1);
	if (!line)
		return (NULL);
	while (i >= 0)
	{
		line[i] = str[i];
		i--;
	}
	return (line);
}

static char	*read_line(char *str, int fd)
{
	int		bytes_read;
	char	*buffer;
	char	*aux;

	bytes_read = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while ((!ft_strchr(str, '\n')) && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(buffer), free(str), NULL);
		if (bytes_read == 0)
			return (free(buffer), str);
		buffer[bytes_read] = '\0';
		aux = str;
		str = ft_strjoin(str, buffer);
		free(aux);
	}
	return (free(buffer), str);
}

char	*get_next_line(int fd)
{
	static char	*str[FD_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (str[fd] = NULL);
	str[fd] = read_line(str[fd], fd);
	if (!str[fd])
		return (str[fd] = NULL, NULL);
	else if (!str[fd][0])
		return (free(str[fd]), str[fd] = NULL, NULL);
	line = take_line(str[fd]);
	if (!line)
		return (free(str[fd]), str[fd] = NULL, NULL);
	str[fd] = set_line(str[fd]);
	return (line);
}
